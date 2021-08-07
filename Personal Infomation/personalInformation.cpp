/*
	PROGRAM: Personal Infomation
	Written by Gean Perez
	Write a program that displays the following pieces of information, each on a separate line:
	your name:
	your address:
	your telephone number:

	Last modification: 08/01/2021
	*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string myname = "Gean Perez";
	string myaddress = "4780 Camden Street, Sparks NV, 89431";
	string myPhonenumber = "775-343-0675";

	cout << "my name is " << myname << "\nmy Address is " << myaddress << "\nmy Phone number is " << myPhonenumber;
	return 0;
	system("pause"); 
}