#pragma once
#include<iostream>
using namespace std;

//12.5
int cifraMaxima(int n)
{
    if (n < 10)
        return n;

    int maximRest = cifraMaxima(n / 10);

    if (n % 10 > maximRest)
        return n % 10;

    return maximRest;
}

int stergeCifraMaxima(int n, int maxim, int rezultat)
{
    if (n == 0)
        return rezultat;

    int cifra = n % 10;
    int rest = stergeCifraMaxima(n / 10, maxim, rezultat);

    if (cifra == maxim)
        return rest;

    return rest * 10 + cifra;
}

void taieMaxima(int& n)
{
    int maxim = cifraMaxima(n);
    n = stergeCifraMaxima(n, maxim, 0);
}

  