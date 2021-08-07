/*
	PROGRAM: How much insurance
	Written by Gean Perez
	Many financial experts advise that property owners should insure their homes or builduings for at least 80 percent 
	of the amount it would cost to replace the structure.  Write a program that asks the user to enter the replacement cost 
	of a building, then displays the minimun amount of insurance he or she should buy for the property.
	Last modification: 08/05/2021
	*/

#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{
	const float insurance_Amount = 0.8; //Financial experts recomendation to insure homes
	float	replacement_Cost,	   // replacement cost of the unit
			minimun_Amount_Insurance; // minimun amount of insurance		

			cout << "Enter the amount it would cost to repair the property:	" << endl;;
			cin >> replacement_Cost;
		
			minimun_Amount_Insurance = insurance_Amount * replacement_Cost;

			cout << "The minimun insurance amount for the property is: " << setw(10) <<fixed << setprecision(2) << minimun_Amount_Insurance;

			return 0;
			system("pause"); 
}
