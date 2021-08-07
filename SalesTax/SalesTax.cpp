/*
	PROGRAM: Sale Tax
	Written by Gean Perez
	Write a program that will compute the total sales tax on a $95 purchase.  Assume the state sale tax is 4 percent
	and the country sales tax is 2 percent
	Last modification: 08/01/2021
	*/

#include <iostream>
using namespace std; 

int main()
{
	int purchase = 95;  //variable purchase = 95
	double salesTax;  // variable salesTax
	const float stateTax = 0.04;	// state tax = 4 percent
	const float countySalesTax = 0.02;	// county sale tax = 0.02
	salesTax = purchase * (stateTax + countySalesTax);  // both tax would be added together and then multiply by the purchase value its value will be store in sales tax
	
	cout << "if the purchase is $" << purchase << "\nand the sales tax is $" << stateTax << "\nand the county tax is $" << countySalesTax
		<< "\nthe total paid on taxes is $" << salesTax; 
	return 0;
	system("pause"); 
}