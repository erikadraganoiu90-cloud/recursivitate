#pragma once
#include<iostream>
using namespace std;


//7.5
int recorduriRec(int v[], int n, int i, int maxim, int numar)
{
    if (i == n)
        return numar;

    if (v[i] > maxim)
        return recorduriRec(v, n, i + 1, v[i], numar + 1);

    return recorduriRec(v, n, i + 1, maxim, numar);
}

int cateRecorduri(int v[], int n)
{
    if (n == 0)
        return 0;

    return recorduriRec(v, n, 1, v[0], 1);
}

