/*
	PROGRAM: Circuit Board Price
	Written by Gean Perez
	An electronics company sells circuit boards at a 35 percent profit. write a program that will calculate the selling price
	of a circuit board that costs $14.95.  Display the result on the screen 
	Last modification: 08/01/2021
	*/

#include <iostream>
using namespace std;

int main()
{
	const float profit = 0.35;	//profit per board 
	float boardCost = 14.95; // board price
	float boardSale = boardCost * profit + boardCost; // boardCost * profit + boardCost = boardSale

	cout << "if the board cost $" << boardCost << "\nand the profit per sale is " << profit << "\nThe board will have a price of $" << boardSale;
	return 0;
	system("pause");
}