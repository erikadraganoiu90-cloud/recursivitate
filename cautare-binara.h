#pragma once
#include<iostream>
using namespace std;

//8.5
int primaPozitieCelPutin(int v[], int st, int dr, int x)
{
    if (st == dr)
        return st;

    int mij = st + (dr - st) / 2;

    if (v[mij] < x)
        return primaPozitieCelPutin(v, mij + 1, dr, x);

    return primaPozitieCelPutin(v, st, mij, x);
}

int primaPozitieMaiMare(int v[], int st, int dr, int x)
{
    if (st == dr)
        return st;

    int mij = st + (dr - st) / 2;

    if (v[mij] <= x)
        return primaPozitieMaiMare(v, mij + 1, dr, x);

    return primaPozitieMaiMare(v, st, mij, x);
}

int cateInInterval(int v[], int n, int a, int b)
{
    if (a > b)
        return 0;

    int prima = primaPozitieCelPutin(v, 0, n, a);
    int dupaUltima = primaPozitieMaiMare(v, 0, n, b);

    return dupaUltima - prima;
}

