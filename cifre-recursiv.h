#pragma once
#include<iostream>
using namespace std;

//2.1
int cifraMaxima(int n) {
	if (n < 10) {
		return n;
	}
	int max = cifraMaxima(n / 10);
	if (n % 10 > max) {
		return n % 10;
	}
	return max;
}

//2.5
int sumaCif(int n) {
	if (n == 0) {
		return 0;
	}
	return n % 10 + sumaCif(n / 10);
}

int cuSumaCifrelor(int n, int s) {
	if (n == 0) {
		return 0;
	}

	if (sumaCif(n) == s) {
		return 1 + cuSumaCifrelor(n-1, s);
	}

	return cuSumaCifrelor(n - 1, s);
}