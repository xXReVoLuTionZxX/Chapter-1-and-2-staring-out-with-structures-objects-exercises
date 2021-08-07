/*
	PROGRAM: Interest Earned
	Written by Gean Perez
	Assuming there are no deposits other than the original investment, the balance in a savings account after one year may be calculated as
	Amount = Principal X (1 + rate / T ) ^ T
	Principal is the balance in the savings acount rate is the interest rate, and T is the number of times the interest is compounded 
	during a year (T is 4 if the interest is compounded quarterly).
	Write a program that asks for the principal, the interest rate and the number of times the interest is compounded.
	it should display a report similar to 

	interest Rate:				4.25%
	Times Compounded			12
	principal				$1000.00
	Interest				$43.34
	Amount of savings		$1043.34

	Last modification: 08/05/2021
	*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double Principal,  //hold the balance in the savings account
		  Rate,	   // Hold the Interest rate
		  T,		  // number of times the interest is compound
		  amount,
		  Interest; 

	cout << "Enter the balance in the savings account: ";
	cin >> Principal;		//store the input of the user balance of the savings account
	

	cout << "Enter the interest Rate: ";
	cin >> Rate;			// store the input of the user rate
	Rate /= 100; 

	cout << "Enter the number of times the interest is compounded: ";
		cin >> T;		   //store the input of user number of times the interest is compound

	amount = Principal * pow(( 1 + (Rate / T)), T);		//calculates the total earned 
	
	Interest =  (amount * Rate) - 1 ;					//calculates the  interest earned	

	//display 
	cout <<"Interest Rate:      " <<setw(8) << fixed << setprecision(2) <<  Rate * 100 << "%" << endl;
	cout << "Times compound:    " <<setw(8) << fixed << setprecision(2) << T << endl;
	cout << "Principal:         " <<setw(8) << fixed << setprecision(2) << "$ " << Principal << endl;
	cout << "Interest:          " <<setw(8) << fixed << setprecision(2) << "$ " << Interest << endl;
	cout << "Amount of savings  " <<setw(8) << fixed << setprecision(2) << "$ " << amount << endl;

	return 0;
	system("pause");

}