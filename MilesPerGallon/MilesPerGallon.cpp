/*
	PROGRAM: Miles per Gallon
	Written by Gean Perez
	A car holds 15 gallons of gasoline and can travel 375 milles before refueling.  Write a program that calculates the number of miles
	per gallon the car gets.  Display the result on the screen. 
	Hint use the following formula to calculate miles per gallon (MPG) 
	MPG 5 Miles driven / Gallons of Gas Used
	Last modification: 08/01/2021
	*/


/*
#include <iostream>
using namespace std; 

int main()
{

	float gallons = 15; // 15 gallons 
	float milles = 375;  // 375 milles 
	float milesPerGallon = milles / gallons;  //mpg = miles / gallon

	cout << "A car has " << gallons << " gallons\n" << "and will drive " << milles << " milles\nthe milles per gallons is "
		<< milesPerGallon << endl; // cout 
 
	return 0;
	system("pause"); 
}
*/

/*
PROGRAM: Miles per Gallon
Written by Gean Perez
Write a program that calculates a car's gas mileage.  The program should ask the user to enter 
the number of gallons of gas the car can hold, and the number of miles it can be driven on a full tank. 
it should then display the number of miles that may be driven per gallon of gas
Last modification : 08 / 03 / 2021
*/

#include <iostream>
using namespace std; 

int main()
{
	
	int numberofGallons;		// number of gallons the car can hold
	float numberOfMiles;		//number of miles driven on a full tank
	

	cout << "Enter the number of gallons the car can holds " << endl;
	cin >> numberofGallons;

	cout << "Enter the number of miles the car can drive with a full tank " << endl;
	cin >> numberOfMiles;

	float carGasMileage = numberofGallons * numberOfMiles;		//calculate the car mileage 
	cout << "The number of miles the car can travel with a full tank is \n" << carGasMileage << endl; 

	return 0; 
	system("pause");

}