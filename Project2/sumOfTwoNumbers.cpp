/*
	PROGRAM: Sum Of two Numbers
	Written by Gean Perez
	This program write a program that stores the integers 50 and 100 in variables 
	and stores the sum of these two in a variable total. 
	Last modification: 08/01/2021 
	*/

#include <iostream>
using namespace std; 

int main() {
	int numero1 = 50; // numero1 variable = 50
	int numero2 = 100; // numero2 variable = 100
	int total; 

	// sum of both digits
	total = numero1 + numero2;  // store the the sum of the both integer. 

	cout << "The sum of  " << numero1 << " and " << numero2 << " is equal to = " << total;  // total of the sum 
	
	return 0;
	system("pause"); 
}