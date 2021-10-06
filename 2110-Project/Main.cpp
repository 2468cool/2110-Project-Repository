//==========================================================
//
// Title:      CSC 2110 Project
// Course:     CSC 2110
// Project #:  Project 1
// Authors:     <name>
// Date:       <date>
// Description:
//   <brief description of application including its inputs,
// processing, and outputs>
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <vector> // Allows the use of the 'log'variable
#include "BankSystem.h"
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

	// Declare variables
	//int i;
	//double r;
	//string s;
	//char c;

	//masudur

	//Test commit from clones area
	// Post-Privatization test commit

	// Show application header
	cout << "Welcome to my Application!" << endl;
	cout << "--------------------------" << endl << endl;

	// Read from keyboard
	//cout << "Enter a number: ";
	//cin >> i;

	// Write to screen
	cout << "Hello World!" << endl;
	cout << "Doing something useful here!" << endl;

	CheckingAccount acc(500);

	 cout << acc.getBalance() << endl;
	 acc.withdraw(50);
	 cout << acc.getBalance() << endl;

	// Show application close
	cout << "\nEnd of my Application" << endl;

}