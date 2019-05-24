#ifndef CARLIER_JOBS_H
#define CARLIER_JOBS_H

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
#include <string>
using namespace std;
class Jobs
{
private:	//Czasy: przygotowania, wykonywania, dostarczenia, moment zakoñczenia

    int P;
    int Q;
    int nr_Zad;
public:
    int R;
    int Cq; //suma czasu wykonania + dostarczenia danego zadania;
    static int jobs_amount;
    Jobs(int R, int P, int Q,int nr_Zad)
    {
        this->R = R;
        this->P = P;
        this->Q = Q;
        this->nr_Zad = nr_Zad;
    }

    int get_R() const { return R; }
    int get_P() const { return P; }
    int get_Q() const { return Q; }
    int get_Zad() const { return nr_Zad; }

    void setR(int R) { this->R = R; }
    void setP(int P) { this->P = P; }
    void setQ(int Q) { this->Q = Q; }
    void setZad(int nr_zad) { this->nr_Zad = nr_zad; }

};

struct argMin
{
    bool operator()(const Jobs &z1, const Jobs &z2)
    {
        return z1.get_R() < z2.get_R();
    }
};
struct argMax
{
    bool operator()(const Jobs &z1, const Jobs &z2)
    {
        return z1.get_Q() > z2.get_Q();
    }
};




#endif //CARLIER_JOBS_H
















//int rOld; // zapamiętane r zadania c
//int qOld; // zapamiętane q zadania c
//int nrOld; // zapamiętany numer zadania c
