#ifndef CARLIER_CARLIER_H
#define CARLIER_CARLIER_H
#include "Jobs.h"


    class Carlier {
    public:
        vector<Jobs> PI_OPTIMAL;
        vector<Jobs> PI;
        int Cmax_Schrage;
        int Cmax_Schrage_pmtn;
        int U;   // wartość funkcji celu Cmax
        int UB;  // górne szacowanie, upper bound
        int LB;  // dolne szacowanie, lower bound

        int a;
        int b;
        int c;

        int rPrim; // nowe r dla zadania c
        int pPrim; // suma p KROK 5
        int qPrim; // nowe q dla zadania c

        int hPrim;


        Carlier(): U(0),UB(INT32_MAX), LB(0),a(0),b(0),c(-1),
                   rPrim(INT32_MAX),pPrim(0),qPrim(INT32_MAX),
                   Cmax_Schrage(0),Cmax_Schrage_pmtn(0),hPrim(0){}

        int find_b();
        int find_a();
        int find_c();
    };
int Schrage(Carlier &carus);
int find_max(int Cmax, int Q);
int find_max(int a, int b,int c);
int find_min(int a,int b);
int Schrage_pmtn(Carlier &carus);




#endif //CARLIER_CARLIER_H
