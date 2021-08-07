/*
	PROGRAM: Stadium Seating
	There are three seating categories at a stadium. for a softball game, Class A seats cost $15
	Class B seats cost $12 and class C seats cost $9. Write a program that asks how many tickets for each class of seats 
	were sold, then displays the amount of income generated from ticket sales. format your dollar amount in fixed-point notation
	with two decimal places of precision, and be sure the decimal alwayes display
	Last modification: 08/03/2021
	*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double classA_Seats = 15;		// Class A Seats = 15
	int amountClassASeatsSold;  // input of number tickets Class A sold 
	double classB_seats = 12;		/// Class B seats = 12
	int amountClassBSeatsSold;	// input of number tickets Class B sold
	double classC_seats = 9;		// Class C seats = 9
	int amountClassCSeatsSold;  // input of number tickets Class B sold
	double total;					//total variable
	cout << "How many Class A Seats tickets were sold" << endl;
	cin >> amountClassASeatsSold;

	cout << "How many Class B Seats tickets were sold" << endl;
	cin >> amountClassBSeatsSold;

	cout << "How many Class c Seats tickets were sold" << endl;
	cin >> amountClassCSeatsSold;

	total = classA_Seats * amountClassASeatsSold;
	
	cout << "If the class A seats have a price of $" << classA_Seats << "\nand the amount of seats class sold were " << amountClassASeatsSold
		<< "\nthe total of income generate in class A is " << total << fixed << setprecision(2) << endl;

	total = classB_seats * amountClassBSeatsSold;

	cout << "If the class B seats have a price of $" << classB_seats << "\nand the amount of seats class sold were " << amountClassBSeatsSold
		<< "\nthe total of income generate in class A is " << total << fixed << setprecision(2) << endl;

	total = classC_seats * amountClassCSeatsSold;

	cout << "If the class C seats have a price of $" << classC_seats << "\nand the amount of seats class sold were " << amountClassCSeatsSold
		<< "\nthe total of income generate in class A is " << total << fixed << setprecision(2) <<endl ;
	
	return 0;
	system("pause");
}