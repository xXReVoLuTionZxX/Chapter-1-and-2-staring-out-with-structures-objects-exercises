/*
	PROGRAM: Restaurant Bill
	Written by Gean Perez
	Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal charge.
	The tax shoud be 6.75 percent of the meal cost.  The tip should be 20 percent of the total after adding the tax. 
	Last modification: 08/01/2021
	*/

#include <iostream>
using namespace std; 

int main()
{
	float mealCharge = 88.67; //meal charge
	const float tax = 0.0675; //tax is equal to 6.75 percent
	const float tip = .2; // 20 percent tip 
	float taxToPay; //tax to pay variable
	float tipToPay; // tip to pay variable
	float totalBill;  // total bill variable
	taxToPay = mealCharge * tax ; // compute the tax to pay
	tipToPay = mealCharge * tip;  // compute the tip to pay
	totalBill = taxToPay + mealCharge + tipToPay; 

	cout << "The mealCharge is $" << mealCharge << "\nthe tax is $" << tax << "\nThe amount to pay on taxes is $" << taxToPay <<"\n";
	cout << "\nthe tip is $" << tip << "\nThe amount to pay on the tip is $" << tipToPay << "\n";
	cout << "\nthe Total bill is $" << totalBill; 

	return 0;
	system("pause"); 
}