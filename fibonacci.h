#pragma once
#include<iostream>
using namespace std;

//5.5
int moduriScari(int n)
{
    if (n <= 1)
        return 1;

    return moduriScari(n - 1) + moduriScari(n - 2);
}

