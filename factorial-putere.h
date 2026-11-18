#pragma once
#include<iostream>
using namespace std;

//1.1
int sumaPanaLa(int n) {
	if (n == 0) {
		return 0;
	}
	return n + sumaPanaLa(n - 1);
}

//1.2
int produsImpare(int n) {
	
	if (n == 0||n==1) {
		return 1;
	 }
	if (n % 2 == 0) {
		return produsImpare(n - 1);
	}
	return n * produsImpare(n - 1);
}
