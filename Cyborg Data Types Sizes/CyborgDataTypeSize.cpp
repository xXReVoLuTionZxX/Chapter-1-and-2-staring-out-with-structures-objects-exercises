/*
	PROGRAM: Cyborg Data Type
	Written by Gean Perez
	You have been given a job as a programmer on a cyborg supercomputer. in order to accomplish some calculations, you need to know how many 
	bytes the following data types uses: char, int, float and double. You do not have any technical documentation so you can't look
	this information up.  Write a c++ program that will determine the amount of memory used by these types and display the information 
	on the screen
	Last modification: 09/01/2021
	*/
#include <iostream>
using namespace std;

int main()
{
	cout << "the size of char is " << sizeof(char) << endl;
	cout << "the size of double is " << sizeof(double) << endl;
	cout << "the size of int is " << sizeof(int) << endl;
	cout << "the size of float is " << sizeof(float) << endl;
	return 0;
	system("pause"); 
}