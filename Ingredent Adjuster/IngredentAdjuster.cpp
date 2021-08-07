/*
	PROGRAM: Ingredent Adjuster
	A cookie recipe calls for the following ingredients
	1.5 cups of sugar
	1 cup of butter
	2.75 cups of flour

	the recipe produces 48 cookies with this amount of the ingredients. write a program that asks the user how many cookies
	he or she wants to make, then displays the number of cups of each ingredient needed for the specified number of cookies
	Last modification: 08/04/2021
	*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double cupsOfSugar = 1.5;		//cups of sugar
	double cupOfbutter = 1;			//cups of butter
	double cupsOfFloar = 2.75;		//cups of Floar
	int cookiesProducedWithTheRecipe = 48; //number of cookies produced with the recipe 
	double amountOfCookies; 

	cout << "How many cookies do you want to produce" << endl;
	cin >> amountOfCookies;

	cupsOfSugar = cupsOfSugar / 48 * amountOfCookies; //the number of cup of sugar need to prepare the amount of cookies 
	cout << "The amount of cup of sugar needed is: " << cupsOfSugar << endl;

	cupsOfFloar = cupsOfFloar / 48 * amountOfCookies; //the number of cup of floar need to prepare the amount of cookies
	cout << "The amount of cup of floar needed is: " << cupsOfFloar << endl;

	cupOfbutter = cupOfbutter / 48 * amountOfCookies; //the number of cup of floar need to prepare the amount of cookies
	cout << "The amount of cup of butter needed is: " << cupOfbutter << endl;

	return 0;
	system("pause");

}

