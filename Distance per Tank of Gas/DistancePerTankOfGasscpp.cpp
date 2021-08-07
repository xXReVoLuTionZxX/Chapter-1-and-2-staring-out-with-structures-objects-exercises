/*
	PROGRAM: Miles per Gallon
	Written by Gean Perez
	A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in the town and 28.9 when driven on the highway.
	Write a program that calculates an displays the distance the car can travel on one tank of gas when driven in town and 
	when driven on the highway
	Hint: The following formula can be used to calculate the distance:
	distance 5 number of gallons 3 average miles per gallon 
	Last modification: 09/01/2021
	*/

#include <iostream>
using namespace std; 

int main()
{
	const int gallonGas = 20;  // the amount of gas the car has
	float AveragedrivingInTown = 23.5; //23.5 miles per gallon driving the highway
	float AveragedrivingInHighway = 28.9; // 28.9 miles per gallon when driving in the highway
	float HighwayMilles = gallonGas * AveragedrivingInHighway; // gas * milles per gallon
	float TownMilles = gallonGas * AveragedrivingInTown;  // gas * milles per gallon
	
	cout << "if the car has " << gallonGas << " gallon gas" << "\nand the average milles of traveling on the town is " << AveragedrivingInTown
		<< "\nand the average of milles per gallon traveling in the highway is " << AveragedrivingInHighway << endl;
	cout << "the total milles that the car will drive in town is " << TownMilles << " milles" << endl;
	cout << "the total milles that the car will drive in highway is " << HighwayMilles << " milles" << endl;
	
	return 0;
	system("pause"); 
}