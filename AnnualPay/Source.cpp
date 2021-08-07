/*
	PROGRAM: AnnualPay
	Written by Gean Perez
	Suppose an employee gets paid every two weeks and earns $2,200 each pay period. in a year, the employee
	gets paid 26 times. Write a program that defines the following 
	payAmount This variable holds the amount of pay the employee earns each pay period
	payPeriods This variable will hold the number of pay periods in a year. initialize the variable with 26
	annualPay This variable holds the employee's total annual pay which will be calculated.
	The program should calculate the employee's total annual pay by multiplying the employees pay amount by the number
	of pay periods in a year and store the result in the annualPay variable. Display the total annualpay on the screen
	Last modification: 09/01/2021
*/

#include <iostream>
using namespace std; 

int main()
{
	int payamount = 2200; //two weeks paycheck
	int PayPeriod = 26;		//pay period of the year
	int annualPay = payamount * PayPeriod; 

	cout << "if the employee has a paycheck every two weeks of " << payamount << "\nand in the year works " << PayPeriod << " weeks " << 
		"\nThe total amount earned in a year is " << annualPay;

	return 0;
	system("pause"); 

}
