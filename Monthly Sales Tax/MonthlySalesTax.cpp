/*
	PROGRAM: Monthly Sales Tax
	Written by Gean Perez
	A retail company must file a monthly sales tax report listing the sales for the month and the amount of sales tax collected
	write a program that asks for the month, the year, and the total amount collected at the cash register (i.e sales plus tax).
	Assume the state sales tax is 4 percent, and the county sales tax is 2 percent. 
	If the total amount collected is known and the total sales tax is 6 percent, the amount of product sales may be calculated as:
	S = T/1.06 
	S is the product sales and T is the total income (product sales plus sales tax). The program should display a report similar to:

	Month: October
	--------------------------------------------------------------------------------------------------------------------------------

	Total Collected:							$26572.89
	Sales County Sales Tax:						$25068.76
	county Sales Tax:							$501.38
	State sales Tax:							$1002.75
	Total Sales Tax:							$1504.13

	Last modification: 08/05/2021
	*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string month; //holds the month name
	int year;	  //holds the year;
	
	const double stateSalesTax = 0.04, // holds state Sales tax
		countySalesTax = 0.02; //holds county sales tax


			  double TotalCollected; //Total collected
	
	cout << "Enter the amount collected at the cash register: ";
    cin >> TotalCollected;			// gets the Total cash collected at the register
			  
			  double productSales = TotalCollected / 1.06,		//The formula indicates the product sales  is s = T/ 1.06
			  TotalCountySalesTax = countySalesTax * productSales,		//calculate the Total County Sales Tax
			  TotalStateTax = stateSalesTax * productSales,				//calculate the Total State Tax
			  TotalSaleTax = TotalCountySalesTax + TotalStateTax;		// Calculate Total Sale Tax 

	cout << "Enter the month: ";
	cin >> month;				//gets the month input by the user
	
	cout << "Enter the year: ";
	cin >> year;						//gets the year input by the user

	

		cout << "month:            " << setw(8) << month << setw(8) << year << endl;											 //Display the month
		cout << "-------------------------------------" << endl;				
		cout << "Total Collected:  " << setw(8) << TotalCollected << endl;									 // Display the Total money collected
		cout << "Sales:            " << setw(8) << fixed << setprecision(2) << productSales << endl;		 // Display The product Sales
		cout << "County Sales Tax: " << setw(8) << fixed << setprecision(2) << TotalCountySalesTax  << endl; // Display The county sales Tax
		cout << "State Sales Tax   " << setw(8) << fixed << setprecision(2) << TotalStateTax << endl;		 // Display The Total state Tax
		cout << "Total Sales Tax   " << setw(8) << fixed << setprecision(2) << TotalSaleTax << endl;		 // Display The Total Sale Tax

		return 0;
		system("pause");
}