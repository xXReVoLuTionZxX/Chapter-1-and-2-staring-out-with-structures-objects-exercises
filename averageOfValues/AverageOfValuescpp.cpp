/*
	PROGRAM: Average Of Value
	Written by Gean Perez
	To get the average of a series of values you add the values up then divide the sum by the number of values. 
	Write a program that stores the following values in five different variables: 28, 32, 37, 24 and 33.
	The program shoud first calculate the sum of these five variables and store the result in a separate value named sum.
	Then the program should divide the sum variable by 5 and to get the average. Display the average on the screen. 
	Last modification: 08/01/2021
	*/

#include <iostream>
using namespace std; 

int main()
{
	double variable1 = 28; //variable1 has a value of 28
	double variable2 = 32; //variable2 has a value of 32
	double variable3 = 37; //variable3 has a value of 37 
	double variable4 = 24; //variable4 has a value of 24
	double variable5 = 33; //variable5 has a value of 33
	double sum; 
	double average; 

	sum = variable1 + variable2 + variable3 + variable4 + variable5;  // all variables is added together
	average = sum / 5; 

	cout << "The average is " << average; 

	return 0; 
	system("pause"); 


}