#pragma once
#include<iostream>
using namespace std;

//9.5
bool estePalindromDeLa(int v[], int st, int dr)
{
    if (st >= dr)
        return true;

    if (v[st] != v[dr])
        return false;

    return estePalindromDeLa(v, st + 1, dr - 1);
}

int cautaSufixPalindrom(int v[], int n, int inceput)
{
    if (inceput == n)
        return n;

    if (estePalindromDeLa(v, inceput, n - 1))
        return inceput;

    return cautaSufixPalindrom(v, n, inceput + 1);
}

int elementeDeAdaugat(int v[], int n)
{
    return cautaSufixPalindrom(v, n, 0);
}
