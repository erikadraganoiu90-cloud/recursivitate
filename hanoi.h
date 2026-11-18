#pragma once
#include<iostream>
using namespace std;


//11.5
int discMutat(int n, int k)
{
    if (k % 2 != 0)
        return 1;

    return 1 + discMutat(n, k / 2);
}
