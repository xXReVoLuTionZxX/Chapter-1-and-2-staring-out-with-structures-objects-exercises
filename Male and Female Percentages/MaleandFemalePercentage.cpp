/*
	PROGRAM: Average RainFall
	Write a program that asks the user the number of females registered in a class.
	The program should display the percentage of males and females in the class
	Hint: suppose there are 8 males and 12 females in a class. There are 20 students in the class
	the percentage of males can be calculated as 8 / 20 = 0.4 or 40 percent
	the percentage of females can be calculated as 12 /20 = 0.6 or 60 percent
	Last modification: 08/04/2021
	*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int males; //holds the amount of males in the class
	int females; //holds the amount of females in the class
	double totalStudents; // holds the sum of female and male variable

	cout << "Enter the number of males in the class" << endl;
	cin >> males;

	cout << "Enter the number of females in the class " << endl;
	cin >> females;

	totalStudents = static_cast<double>(males) + females;

	cout << "The percent of males in the class is " << setprecision(2) << fixed << males / totalStudents << endl;
	cout << "The percent of females in the class is " << setprecision(2) <<fixed <<females / totalStudents << endl;

	return 0;
	system("pause"); 
}