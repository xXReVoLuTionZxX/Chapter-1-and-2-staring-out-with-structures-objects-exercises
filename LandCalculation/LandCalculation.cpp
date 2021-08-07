/*
	PROGRAM:  Land Caculation
	Written by Gean Perez
	One acre of land is equivalent to 43,560 square feet.  Write a program that calculates 
	the number of acres in a tract of land with 391,876 square feet
	Last modification: 09/01/2021
	*/

#include <iostream>
using namespace std; 

int main()
{
	const int oneAcre = 43560; // one acre of land is equivalent to 43560
	float  trackOfLand = 391876;  // tract of the land 391876
	float numberOfAcres = trackOfLand / oneAcre; // land / acre = total number of acres

	cout << "if one acre is " << oneAcre << "\nand the land has " << trackOfLand << " squarefeet" << "\nThe total of acres on the land is "
		<< numberOfAcres; 

	return 0;
	system("pause");
}