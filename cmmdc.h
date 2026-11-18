#pragma once
#include<iostream>
using namespace std;

//4.5
int eulerRec(int n, int p, int rezultat)
{
    if (n == 1)
        return rezultat;

    if (p > n / p)
        return rezultat - rezultat / n;

    if (n % p == 0)
    {
        rezultat -= rezultat / p;

        while (n % p == 0)
            n /= p;

        return eulerRec(n, p + 1, rezultat);
    }

    return eulerRec(n, p + 1, rezultat);
}

int indicatorEuler(int n)
{
    if (n == 1)
        return 1;

    return eulerRec(n, 2, n);
}
 

