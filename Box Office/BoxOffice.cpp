/*
	PROGRAM: Box Office
	A movie theater only keeps a percentage of the revenue earned from ticked sales. The reminder goes to the movie distributor.
	Write a program that calculates a theater's gross and net box office profit for a night. 
	The program should ask for the name of the movie, and how many adult and child tickets were sold 
	(The price of an adult is $10.00 and a child's ticket is $6.00.) It should display a report similar to 
	
	movie name:						Wheels of Fury
	Adult Tickets sold:				382
	Child Tickets sold:				127
	Gross Box Office Profit			$4,582.00
	Net Box Office Profit			$916.40
	Amount paid to Distributor		$3,665.60
	Last modification: 08/04/2021
	*/

#include <iostream>
#include <iomanip>
#include <String>
using namespace std; 

int main()
{
	const int AdultTicket = 10;		//holds const value of the Adult Ticket
	const int ChildTicket = 6;		//holds const value of the Child Ticket 
	int AdultTicketSold;			// holds the user input value of number of tickets sold to adults
	int ChildTicketSold;			// holds the user input value of number of tickets sold to Childs
	double grossBoxOfficeProfit;	// calculates the gross Box Office Profit
	double NetBoxOfficeProfit;		// calculates the NET Box Office Profit
	string movieName;				//holds the movie name
	const double RevenueTicketSales = 0.8;	//percentage receive with each ticket sold	

	cout << "Enter the movie name "; 
	getline(cin, movieName);

	cout << "How many adults tickets were sold ";
	cin >> AdultTicketSold;

	cout << "How many Child Tickets were sold ";
	cin >> ChildTicketSold; 

	grossBoxOfficeProfit = (static_cast<double>(AdultTicket) * AdultTicketSold) + (static_cast<double>(ChildTicket) * ChildTicketSold);
	NetBoxOfficeProfit = grossBoxOfficeProfit - (grossBoxOfficeProfit * RevenueTicketSales)  ;

	cout << "Movie Name: " << setw(48) << movieName << endl; 
	cout << "Adult Tickets sold: " << setw(40) << AdultTicketSold << endl;
	cout << "Child Tickets sold: " << setw(40) << ChildTicketSold << endl; 
	cout << "Gross Box Office Profit: " << setw(37) << fixed <<setprecision(2) << grossBoxOfficeProfit << endl;
	cout << "Net Box Office Profit: " << setw(38) << fixed << setprecision(2) << NetBoxOfficeProfit << endl;
	cout << "Amount Paid to the Distribuitor $" << setw(29) <<fixed << setprecision(2) << grossBoxOfficeProfit * RevenueTicketSales << endl;
		
	return 0;
	system("pause"); 
}