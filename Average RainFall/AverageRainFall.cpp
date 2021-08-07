/*
	PROGRAM: Average RainFall
	Written by Gean Perez
	Write a program that calculates the average rainfall for three months.  The program should ask the user as june 
	or july and the amount of rain (in inches) that fell each month. the program should display a message similar to the following
	The average rainfall for june, july and August is 6.72 inches
	Last modification: 08/04/2021
	*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std; 

int main()
{
	string  month1; //holds the month that the user input
	string	month2; //holds the month that the user input
	string  month3; //holds the month that the user input
	double rainOnMonth1;	//holds the amount of rain on the month
	double rainOnMonth2;	//holds the amount of rain on the month
	double rainOnMonth3;	//holds the amount of rain on the month
	double averageRainFall; // holds the average of the three months

	cout << "Enter the name of first month ";	
	cin >> month1;		//holds the name input by the user month 1
	
	cout << "\nEnter the amount of rain ";
	cin >> rainOnMonth1;		//hold the amount of water input by the user 
	
	cout << "\nEnter the name of the second month ";
	cin >> month2;		 //holds the name input by the user month 1

	cout << "\nEnter the amount of rain ";
	cin >> rainOnMonth2;	//hold the amount of water input by the user 

	cout << "\nEnter the name of the third month ";
	cin >> month3;		 //holds the name input by the user month 1

	cout << "\nEnter the amount of rain ";
	cin >> rainOnMonth3;	//hold the amount of water input by the user 

	averageRainFall = (rainOnMonth1 + rainOnMonth2 + rainOnMonth3) / 3;

	cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is: " 
	<< setprecision(2) <<fixed << averageRainFall << " inches" << endl; //display the average rainfall. 

	return 0;
	system("pause");

} 