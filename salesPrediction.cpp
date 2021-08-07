/*
	PROGRAM: Sale Prediction
	Written by Gean Perez
	The east coast sales division of a company generates 58 percent of total sales.
	based on that percentage, write a program that will predict how much the East Coast division
	will generate if the company has 8.6 million in sales this year.
	Last modification: 08/01/2021
	*/

#include <iostream>
using namespace std;

int main()
{
	double companyGenerates = 0.58; // variable company Generates
	double salesPredicted = 8.6E6; // variable Sales predicted
	double earnedIncome;	// variabl Earned income

	earnedIncome = companyGenerates * salesPredicted; // earned income is the multiplication of company generates and sales predicted 

	cout << "If the company generates " << companyGenerates << " and the sales prediction is " << salesPredicted
		<< " The total projected revenue will be " << earnedIncome;  // Display sales prediction.  

	return 0;
	system("pause");
}