#pragma once
 
#include<iostream>
using namespace std;

//6.5
void pareApoiImpare(int n)
{
    if (n == 0)
        return;

    int cifra = n % 10;

    if (cifra % 2 == 0)
        cout << cifra << " ";

    pareApoiImpare(n / 10);

    if (cifra % 2 != 0)
        cout << cifra << " ";
}
