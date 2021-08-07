/*
	PROGRAM: Currency
	Written by Gean Perez
	Write a program that will convert U.S dollar amounts to japanese yen and to euros,
	storing the conversion factors in the constant YEN_PER_DOLLAR and EUROS_PER_DOLLAR.
	To get the most up-todate exchanges rates, search the internet using the term 
	"Currency exchange rate". IF you cannot find the most recent rates use the following:
	1 Dollar = 98.93 Yen
	1 Dollar = 0.74 Euros
	Format your currency amounts in fixed point notation, with two decimal places of precision and be sure
	the decimal point is always displayed
	Last modification: 08/05/2021
	*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
const float YEN_PER_DOLLAR = 98.43,		// holds the value of 1 Dollar = 98.43 YEN
			EUROS_PER_DOLLAR = 0.74;	// Holds the value of 1 Dollar = 074 Euros
float		amountOFDollar,				// holds the amount of dollars to be converted
			DollarToYen,				// Holds the value calculated of conversion from dollar to Yen	
			DollarToEuros;				// Holds the value calculated of conversion from dollar to Euros

	cout << "Enter the amount of dollars to be converted: " << endl;
	cin >> amountOFDollar;

	DollarToYen		= YEN_PER_DOLLAR * amountOFDollar;	//calculates and store the conversion of dollar to yen
	DollarToEuros = EUROS_PER_DOLLAR * amountOFDollar;	//calculates and store the conversion of dollar to euros

	cout << "The conversion value of Dollar to Yen is:  " << setw(20) << fixed << setprecision(2) << "$" << DollarToYen << endl;	//display the conversion of dollar to yen
	cout << "The conversion value of dollar to Euro is: " << setw(20) << fixed << setprecision(2) << "$" << DollarToEuros << endl; //display the conversion of dollar to euros

	return 0;
	system("pause"); 

	
}
