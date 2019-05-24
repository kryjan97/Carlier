//
// Created by krystian on 16.05.19.
//

#include "Carlier.h"
int find_max(int Cmax, int Q)
{
    return Cmax > Q ? Cmax : Q;
}
int find_max(int a, int b,int c)
{
    int max=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;
    return max;
}

int find_min(int a, int b){
return a > b ? b : a;
}

int Carlier::find_b(){

    for(int i=Jobs::jobs_amount;i>0;i--){
        if(Cmax_Schrage==PI[i].Cq){
            b=i;
            break;
        }
    }
    return b;
}

int Carlier::find_a(){

    int suma = 0;

    for(a = 0; a < b; a++)
    {
        suma = 0;
        for (int i = a; i <= b; i++)
        {
            suma += PI[i].get_P();
        }

        if (Cmax_Schrage == (PI[a].get_R() + suma + PI[b].get_Q()))
        {
            return a;
        }

    }

    return a;
}

int Carlier::find_c() {
    c = - 1;

    for ( int i = b ; i >= a ; i-- ) {
        if (PI[i].get_Q() < PI[b].get_Q()) {
            c = i;
            break;
        }
    }

    return c;
}

int Schrage(Carlier &carus)
{
    int i = 0;
    int Cmax = 0;
    int temp = 0;
    int temp_order = 0;

    std::vector<Jobs> Permutation;
    std::vector<Jobs> not_ready = carus.PI;//jobs_vector;
    std::vector<Jobs> ready;

    int t = not_ready.front().get_R();

    while ((!empty(not_ready) || !empty(ready)))
    {
        while (!empty(not_ready) && not_ready.front().get_R() <= t)
        {
            ready.push_back(not_ready.front());
            not_ready.erase(not_ready.begin());
        }
        if (empty(ready))
            t = not_ready.front().get_R();
        else
        {
            if (ready.size() > 1)
            {
                for (int j=0; j < ready.size(); j++)
                {
                    if (ready[j].get_Q() >= temp)
                    {
                        temp = ready[j].get_Q();
                        temp_order = j;
                    }
                }
            }

            Permutation.push_back(ready[temp_order]);
            ready.erase(ready.begin()+temp_order);

            t += Permutation.back().get_P();

            Cmax = find_max(Cmax, t + Permutation.back().get_Q());
            Permutation[Permutation.size()-1].Cq= t + Permutation[Permutation.size()-1].get_Q();
            temp = 0;
            temp_order = 0;

            i++;
        }
    }
    carus.PI=Permutation;
    carus.Cmax_Schrage=Cmax;
    //cout << "\nCmax: " << Cmax << std::endl;
    return Cmax; //Jaka kolejnosc powinno mi zwrocic?
}


int Schrage_pmtn(Carlier &carus)
{   //dajszraga(carus);
    int Cmax = 0;

    std::vector<Jobs> ready;
    std::vector<Jobs> not_ready =carus.PI;// jobs_vector;
    std::vector<Jobs> Permutation;
    std::vector<Jobs> current_job;
    std::vector<Jobs> temp_job;
    current_job.push_back(Jobs(0, 0, 999999,1));
    temp_job.push_back(Jobs(0, 0, 0,1));

    int t = 0;

    int temp = 0;
    int temp_order = 0;

    while (!empty(ready) || !empty(not_ready))
    {
        while (!empty(not_ready) && not_ready.front().get_R() <= t)
        {
            ready.push_back(not_ready.front());
            temp_job.erase(temp_job.begin());
            temp_job.push_back(not_ready.front());
            not_ready.erase(not_ready.begin());

            if (temp_job.front().get_Q() > current_job.front().get_Q())
            {
                current_job.front().setP(t - temp_job.front().get_R());
                t = temp_job.front().get_R();


                if (current_job.front().get_P() > 0)
                    ready.push_back(current_job.front());
            }
        }

        if (empty(ready))
            t = not_ready.front().get_R();
        else
        {
            if (ready.size() > 1)
            {
                for (int j = 0; j < ready.size(); j++)
                {
                    if (ready[j].get_Q() >= temp)
                    {
                        temp = ready[j].get_Q();
                        temp_order = j;
                    }
                }
            }

            Permutation.push_back(ready[temp_order]);	//add jobs to permutation
            current_job.erase(current_job.begin());
            current_job.push_back(ready[temp_order]);	//adding to current job

            ready.erase(ready.begin() + temp_order);

            t += Permutation.back().get_P();
            Cmax = find_max(Cmax, t + Permutation.back().get_Q());

            temp = 0;
            temp_order = 0;
        }

    }
    carus.Cmax_Schrage_pmtn=Cmax;
    //cout << "\nCmax z przerwaniami: " << Cmax << std::endl;
    return Cmax;
}






















