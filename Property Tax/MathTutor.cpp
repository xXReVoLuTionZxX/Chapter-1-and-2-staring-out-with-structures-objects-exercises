/*
	PROGRAM: Math Tutor
	Written by Gean Perez
	Write a program that can be used as a math tutor for a young student.  The program should display two random numbers
	to be added, such as 
	247
	+129
	The program should then pause while the student works on the problem.  When the student is ready to check the answer
	he or she can press a key and the program will display the correct solution
247
+129
376

	Last modification: 08/05/2021
	*/

#include <iostream>
#include <cstdlib>		//For rand and Srand 
#include <ctime>		// For the time function
#include <iomanip> 
using namespace std;

int main()
{
	//get the system time 
	    int min_Value = 100;
	    int  max_Value= 999;
	 
	
	int firstNumber = (rand() % (max_Value - min_Value +1)) + min_Value;		//random number from -999 to 999
	int secondNumber =(rand() % (max_Value - min_Value +1)) + min_Value;		// random number from -999 +999
	int total; 

	cout << "  " << firstNumber << endl;
	cout << "+ " << secondNumber;
	cin.get();		//pause the program
	total = firstNumber + secondNumber; 
	cout <<"  " << total;
	return 0;
	system("pause");
}