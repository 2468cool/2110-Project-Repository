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

	// Show application close
	cout << "\nEnd of my Application" << endl;
	
	//Creates a bankSystem object named acc1 which aks for user input(id,first,last)
	//then it executes the start function
	string id,fn,ln;
	cout<<"Enter your bank ID: ";
	cin>>id;
	
	cout<<endl<<"Enter your first name: ";
	cin>>fn;
	
	cout<<endl<<"Enter your last name: ";
	cin>>ln;
	cout<<endl<<endl;
	
	BankSystem acc1("123",fn,ln);
	
	//infinite while loop that executes the menu until the user exits by choosing '9'
	while(true)	
	{
		acc1.start();
	}
	

}
