#pragma once
#include<iostream>
using namespace std;

//3.5

int oglinditul(int n, int r) {
	if (n == 0) {
		return r;
	}
	return oglinditul(n / 10, r * 10 + n % 10);
}
int oglinditul(int n) {
	return oglinditul(n, 0);
}
bool estePalindromNr(int n)
{
	return n == oglinditul(n);
}

int pasiPanaLaPalindrom(int n) {
	if (estePalindromNr(n)) {
		return 0;
	}
	return 1 + pasiPanaLaPalindrom(n + oglinditul(n));
}