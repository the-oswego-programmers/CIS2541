// project1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	double hours, rate, pay;

	// Get the number of hours worked.
	cout << "How many hours did you work? ";
	cin >> hours;

	// Get the hourly pay rate.
	cout << "How much do you get paid per hour? ";
	cin >> rate;

	// Calculate the pay.
	pay = hours * rate;

	// Display the pay.
	cout << "You have earned $" << pay << endl;

	cout << "So how about that!" << endl << endl;

	cout << "Now go buy some donuts..." << endl;

	cout << "One more time..." << endl;
    return 0;
}

