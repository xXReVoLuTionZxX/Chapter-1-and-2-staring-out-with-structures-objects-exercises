/*
	PROGRAM: How many Calories
	Written by Gean Perez
	A bag of cookies holds 30 cookies.  The calorie information on the bag claims there are 10 "servings" in the bag 
	and that a serving equals 300 calories. write a program that asks the user to input how many cookies he or she 
	actually ate, then reports how many calories were consumed. 
	Last modification: 08/04/2021
	*/

#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{
	const int bagOfCookies = 30;		// hold the value of the amount of cookies in the bag
	int CookiesAte;			//hold the value of cookies ate
	int Calories = 300;		//amount of calories in the bag
	int servings = 10;		//number of servings 
	double caloriesconsumed; 
	double cookiesPerServing;
	
	cout << "Enter the number of cookies consummed";
	cin >> CookiesAte; 

	cookiesPerServing = bagOfCookies / servings; 
	
	caloriesconsumed = 

}