/*
	PROGRAM: Celsius to Fahrenheit
	Written by Gean Perez
	Write a program that converts Celsius temperatures to Fahrenheit temperatures
	The formula is 
	F = 9/5*c+32
	F is the Farenheit temperature and C is the Celsius temperature
	Last modification: 08/05/2021
	*/

#include <iostream>
#include <iomanip>
using namespace std; 

int main ()
{
float Farenheit,								//holds the value of farenheit temperature
	  Celsius; 									//holds the value of celsius temperature
const float ThisMultiplybyC = 1.8;				//holds the const value of 9/5 
const int plus32 = 32;							// holds the value of 32

cout << "Enter the temperature in celsius: " << endl;
cin >> Celsius;									//store the user input value of the temperature in celsius

Farenheit = ThisMultiplybyC * Celsius + plus32; // Calculate the Farenheit temperature
Farenheit = static_cast<int>(Farenheit);

cout << "The temperature in Farenheit is: " << setw(10) << Farenheit << endl;	//Display  Farenheit Temperature

return 0;
system("pause"); 

}
