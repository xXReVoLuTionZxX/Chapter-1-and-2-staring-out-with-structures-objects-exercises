/*
	PROGRAM: Automobile Costs
	Written by Gean Perez
	Write a program that asks the user to enter the monthly costs of the following expenses
	incurred from operating his or her automobile: Loan payment, insurance, gas, oil, tires and maintenance.
	The program should then display the total monthly cost of these expenses, and the total annual costs of these expenses
	Last modification: 08/05/2021
	*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
	const int year = 12; // holds the 12 months of the year
	
	float LoanPayment,	// holds the amount of the Loan
		  insurance,	// holds the amount of the insurance
		  gas,			// holds the amount of the gas
		  oil,			// holds the amount of the oil
		  tires,		// holds the amount of the tires
		  maintenace,	// holds the amount of the maintenace
		  monthlyCosts,	// holds the amount of monthly cost of this expenses 
		  annualCosts;	// holds the amount of annual cost of this expenses

	cout << "Enter the amount of the LoanPayment: " << endl;
	cin >> LoanPayment;		//user input amount of the loan payment is store here
	cout << "Enter the amount of the insurance: " << endl;
	cin >> insurance;		// user input amount of insure is store here
	cout << "Enter the amount of the gas: " << endl;
	cin >> gas;				//user input amount of gas is store here
	cout << "Enter the amount of oil: " << endl;
	cin >> oil;				//user input amount of oil is store here
	cout << "Enter the amount of tires: "<< endl;
	cin >> tires;			//user input amount of tires is store here
	cout << "Enter the amount maintenance" << endl;
	cin >> maintenace;		//user input amount of maintenace is store here
	
	monthlyCosts = LoanPayment + insurance + gas + oil + tires + maintenace; // calculate monthly cost of this expenses
	annualCosts = monthlyCosts * year;										 // calculate year cost of this expenses

	cout << "The monthly cost of these expenses are: " << setw(40) << fixed << setprecision(2) << "$" << monthlyCosts << endl;		// Display monthly Costs
	cout << "The annual cost of these expenses are:  " << setw(40) << fixed << setprecision(2) << "$" << annualCosts  << endl;		//Display annual Costs
	 
	return 0;
	system("pause"); 
}

