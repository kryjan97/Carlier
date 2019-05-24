#include <iostream>
#include "cmake-build-debug/Carlier.h"

using namespace std;
void wypisz(vector<Jobs> vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i].get_R()<<"  "<<vec[i].get_P()<<"  "<<vec[i].get_Q()<<"  "<<endl;
    }
}
void dajszraga(Carlier &c){

    cout<<"###################################"<<Schrage_pmtn(c)<<endl;
}
vector<Jobs> load_jobs() {
    const int file_nr = 5;


    vector<Jobs> jobs_vector;
    ifstream file;
    string files[5] = {"in50.txt", "in100.txt", "in200.txt","in17.txt","test.txt" };

    file.open(files[file_nr-1]);
    int r,p,q,columns;
    file >> Jobs::jobs_amount >> columns;
    for (int i = 0; i < Jobs::jobs_amount; i++)
    {
        file >> r >> p >> q;
        jobs_vector.push_back(Jobs(r, p, q,i+1));
    }

    std::cout << "File: " << files[file_nr-1]
              << "\nJobs: " << Jobs::jobs_amount
              << "\nColumns: " << columns << std::endl;

    std::sort(jobs_vector.begin(), jobs_vector.end(), argMin());
    file.close();
    return jobs_vector;
}

int carlier_fun(Carlier &c){
//////////KROK 2
c.U=Schrage(c);

cout<<endl<<endl;
//////////KROK 3-5
if(c.U<c.UB){
    c.UB=c.U;
    c.PI_OPTIMAL=c.PI;
}
cout<<"UB JEST ROWNE: "<<c.UB<<endl;
//////////KROK 6-8
    c.find_b();
    c.find_a();
    c.find_c();

    cout<<"a: "<<c.a<<" ";
    cout<<"b: "<<c.b<<" ";
    cout<<"c: "<<c.c<<endl<<endl;

//////////KROK 9-11
    if(c.c==-1){
        cout<<"\nBrak zadania c !!!\n";
        return c.U;
    }

//////////KROK 12-13
for(int i=c.c+1; i<=c.b; i++){
    c.rPrim=find_min(c.rPrim,c.PI[i].get_R());
    c.pPrim+=c.PI[i].get_P();
    c.qPrim=find_min(c.qPrim,c.PI[i].get_Q());

}
    c.hPrim=c.rPrim + c.pPrim + c.qPrim;
    cout<<"r': "<<c.rPrim<<" ";
    cout<<"p': "<<c.pPrim<<" ";
    cout<<"q': "<<c.qPrim<<" ";
    cout<<"h': "<<c.hPrim<<endl<<endl;


    //TWORZENIE H(K u {c})
    int rPrim=INT32_MAX, pPrim=0, qPrim=INT32_MAX, hPrim=0;
    for(int i=c.c; i<=c.b; i++){
        rPrim=find_min(rPrim,c.PI[i].get_R());
        pPrim+=c.PI[i].get_P();
        qPrim=find_min(qPrim,c.PI[i].get_Q());

    }
    hPrim=rPrim + pPrim + qPrim;
    cout<<"r': "<<rPrim<<" ";
    cout<<"p': "<<pPrim<<" ";
    cout<<"q': "<<qPrim<<" ";
    cout<<"h': "<<hPrim<<endl<<endl;




//////////KROK 14
    int rememberR=c.PI[c.c].get_R();
    int whereR=c.PI[c.c].get_Zad();
    c.PI[c.c].setR(find_max(c.PI[c.c].get_R() , c.rPrim + c.pPrim));


//////////KROK 15-16
c.LB = Schrage_pmtn(c);
c.LB = find_max(c.hPrim,hPrim,c.LB);
cout<<"LB PO R JEST ROWNE: "<<c.LB<<endl;
//////////KROK 17-19
if(c.LB < c.UB){
    cout<<"PIERWSZY IF R";
    c.UB=carlier_fun(c);
}

//////////KROK 20
    for (int i = 0; i < Jobs::jobs_amount; i++)
    {
        if(whereR == c.PI[i].get_Zad()){
            c.PI[i].setR(rememberR);
            break;
        }

    }

//////////KROK 21
    int rememberQ=c.PI[c.c].get_Q();
    int whereQ=c.PI[c.c].get_Zad();
    c.PI[c.c].setQ(find_max(c.PI[c.c].get_Q() , c.qPrim + c.pPrim));


//////////KROK 22-23
   c.LB = Schrage_pmtn(c);
  c.LB = find_max(c.hPrim,hPrim,c.LB);
    cout<<"LB PO Q JEST ROWNE: "<<c.LB<<endl;
//////////KROK 24-26
if(c.LB < c.UB) {
    cout<<"DRUGI IF Q"<<endl;
    c.UB=carlier_fun(c);
}

//////////KROK 27
    for (int i = 0; i < Jobs::jobs_amount; i++)
    {
        if(whereQ == c.PI[i].get_Zad()){
            c.PI[i].setQ(rememberQ);
            break;
        }

    }




    return c.U;
}



void suma(vector<Jobs> &vec){
    int sumaR=0,sumaP=0,sumaQ=0,sumaZad=0;
    for(int i=0; i<vec.size();i++){

        sumaR+=vec[i].get_R();
        sumaP+=vec[i].get_P();
        sumaQ+=vec[i].get_Q();
        sumaZad+=vec[i].get_Zad();
//        cout<<"SUMA R: "<<sumaR<<endl;
//        cout<<"SUMA P: "<<sumaP<<endl;
//        cout<<"SUMA Q: "<<sumaQ<<endl;
//        cout<<"SUMA ZAD: "<<sumaZad<<endl;
//        cout<<endl<<endl;
    }
cout<<"SUMA R: "<<sumaR<<endl;
    cout<<"SUMA P: "<<sumaP<<endl;
    cout<<"SUMA Q: "<<sumaQ<<endl;
    cout<<"SUMA ZAD: "<<sumaZad<<endl;
    cout<<endl<<endl;
}


int main() {
Carlier carus;
carus.PI=load_jobs();
int wynik=carlier_fun(carus);
cout<<"WYNIK:  "<<wynik;



//suma(test);
//Schrage(carus);
//    carus.PI[9].setR(738);

    //suma(carus.PI);
//wypisz(carus.PI);

//
//Schrage(carus);
//wypisz(carus.PI);
//carus.PI[12].setR(738);
//dajszraga(carus);
    return 0;
}

