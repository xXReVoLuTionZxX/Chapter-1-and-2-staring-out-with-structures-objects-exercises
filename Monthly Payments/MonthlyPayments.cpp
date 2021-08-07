/*
	PROGRAM: Monthly Payments
	Written by Gean Perez
	The monthly payment on a loan may be calculated by the following formula 
	
	payment = rate * (1 + Rate) ^ N / ((1 + Rate ) ^ N | - 1 )
	
	Rate is monthly interest rate which is the annual interest rate divided by 12.  
	( 12 percent annual interest rate would be 1 percent monthly interest) 
	N is the number of payments, and L is the amount of the loan.

	Write a program that asks for these values then display a report similar to:
	
	Loan Amount:						$10000.00
	Monthly Interest Rate:				1%
	Number of payments:					36
	Monthly Payment:				$	332.14
	Amount Paid:					$	11957.15
	Interest paid:					$	1957.15
	*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; 

int main()
{
	double loanAmount, //hold Loan Amount
		   MonthlyInterestRate,
		   NumberOfPayments,
		   MonthlyPayments,
		   amoundPaidBack,
		   interestPaid;

	cout << "Enter the loan amount: ";
	cin >> loanAmount;

	cout << "Enter The Annual interest Rate: ";
	cin >> MonthlyInterestRate;

	MonthlyInterestRate /= 1200;
	
	cout << "Enter the number of payments: ";
	cin >> NumberOfPayments;

	MonthlyPayments = (MonthlyInterestRate * pow((1 + MonthlyInterestRate), NumberOfPayments) / ( pow((1 + MonthlyInterestRate), NumberOfPayments) - 1 ) * loanAmount);
	amoundPaidBack = MonthlyPayments * NumberOfPayments;
	interestPaid = amoundPaidBack * MonthlyInterestRate * 100;

	cout << "Loan Amount:           " << setw(8) << fixed << setprecision(2) << loanAmount << endl;
	cout << "Monthly Interest Rate: " << setw(8) << fixed << setprecision(2) << MonthlyInterestRate << endl;
	cout << "Number of payments:    " << setw(8) << fixed << setprecision(2) << NumberOfPayments << endl;
	cout << "Monthly Payment:       " << setw(8) << fixed << setprecision(2) << MonthlyPayments << endl;
	cout << "Amount paid back:      " << setw(8) << fixed << setprecision(2) << amoundPaidBack << endl;
	cout << "Interest Paid:         " << setw(8) << fixed << setprecision(2) << interestPaid << endl;

	return 0;
	system("pause");
}