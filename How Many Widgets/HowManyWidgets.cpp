/*
	PROGRAM: How many Widgets
	Written by Gean Perez
	The Yukon Widget Company manufactures widgets that weight 12.5 pounds each. Write a program that calculates how many widgets 
	are stacked on a pallet, based on the total weight of of pallet.  The program should ask the user how much the pallet weight by 
	itself and with the widgets stacked on it.  It should then calculate and display the number of widgets stacked on the pallet.
	Last modification: 08/04/2021
	*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const double WidgetsPound = 12.5; //holds the pounds of the widgets
	double WidgetsOnaPallet;		  //calculate the widgets and pallet 
	double totalWeightPallet;		  //holds the total weight of the pallet

	cout << "How much the pallet weighs: ";
	cin >> totalWeightPallet;

	WidgetsOnaPallet = totalWeightPallet / WidgetsPound;

	cout << "The amount of widgets on the pallet is " << static_cast<int>(WidgetsOnaPallet); //value is display as an int for better precision

	return 0; 
	system("pause"); 
}