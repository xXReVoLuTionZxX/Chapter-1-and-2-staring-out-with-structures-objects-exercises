/*
	PROGRAM: oceanLevels
	Written by Gean Perez
	Assuming the ocean's level is currently rising at about 1.5 milimeters per year,
	write a program that displays:
	the number of milimeters higher than the current level that the oceanlevel will be in 5 years
	The number of milimeters higher than the current level that the ocean level will be in 7 years 
	The number of milimeters higher than the current level that the ocean level will be in 10 years
	Last modification: 09/01/2021
	*/

#include <iostream>
using namespace std; 
int main()
{
	float const year5 = 5; // year number 5
	float const year7 = 7; // year number 7
	float const year10 = 10; // year number 10
	float const ocean = 1.5E-3; // ocean rising
	float oceanlevel = year5 * ocean;
	cout << "In 5 years the ocean will rise " << oceanlevel << " milimeters" << endl;
	oceanlevel = year7 * ocean;
	cout << "In 7 years the ocean will rise " << oceanlevel << " milimeters" << endl;
	oceanlevel = year10 * ocean;
	cout << "In 10 years the ocean will rise " << oceanlevel << " milimeters" << endl;

	return 0;
	system("pause"); 
}