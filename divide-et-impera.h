#pragma once
#include<iostream>
using namespace std;

//10.5
int interclasareInversiuni(int v[], int st, int mij, int dr)
{
    int aux[100];
    int i = st, j = mij + 1, k = st;
    int numar = 0;

    while (i <= mij && j <= dr)
    {
        if (v[i] <= v[j])
            aux[k++] = v[i++];
        else
        {
            aux[k++] = v[j++];
            numar += mij - i + 1;
        }
    }

    while (i <= mij)
        aux[k++] = v[i++];

    while (j <= dr)
        aux[k++] = v[j++];

    for (int p = st; p <= dr; p++)
        v[p] = aux[p];

    return numar;
}

int inversiuni(int v[], int st, int dr)
{
    if (st >= dr)
        return 0;

    int mij = st + (dr - st) / 2;

    int numar = inversiuni(v, st, mij);
    numar += inversiuni(v, mij + 1, dr);
    numar += interclasareInversiuni(v, st, mij, dr);

    return numar;
}
