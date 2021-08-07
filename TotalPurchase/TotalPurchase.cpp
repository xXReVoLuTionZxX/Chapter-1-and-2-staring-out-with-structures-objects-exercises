/*
	PROGRAM: TotalPurchase
	Written by Gean Perez
	A customer in a store is purchasing five items.  The prices of the five items are as follows:
	Price of item1 = $15.95
	price of item2 = $24.95
	price of item3 = $6.95
	price of item4 = $12.95
	price of item5 = $3.95
	Wirte a program that holds the prices of the five items in five variables. Display each item's price, the subtotal
	of the sale, the eamount of sales tax and the total.  Assume the sales tax is 7 percent. 
	Last modification: 09/01/2021
	*/

#include <iostream>
using namespace std; 

int main()
{
	float item1 = 15.95;
	float item2 = 24.95;
	float item3 = 6.95;
	float item4 = 12.95;
	float item5 = 3.95;
	const float tax = 0.07; 
	
	float subtotal = item1 + item2 + item3 + item4 + item5; //subtotal 
	float saleTax = subtotal * tax;		//tax to be pay 
	float total = saleTax + subtotal;  // total of the purchase 

	cout << "The first item has a price of $" << item1 << endl;
	cout << "The second item has a price of $" << item2 << endl;
	cout << "The third item has a price of $" << item3 << endl;
	cout << "The forth item has a price of $" << item4 << endl;
	cout << "The five item has a price of $" << item5 << endl;
	cout << "The subtotal of the purchase is $" << subtotal << endl;
	cout << "The amount of tax to be pay is $" << saleTax << endl;
	cout << "The total is $" << total << endl;

	return 0; 
	system("pause"); 
}