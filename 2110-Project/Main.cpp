//==========================================================
//
// Title:      CSC 2110 Project
// Course:     CSC 2110
// Project #:  Project 1
// Authors:    Benjamin Pietna, Masudur Rahman, Angjelo Mana, Karim Soliman, Zachary Weaver
// Date:       12/5/21
// Description:
//   Program asks a user to create a bank account. Then the program will display
//	a menu for the user to cycle through. Each option adds a log depending on what
//	the client has done. When the client exits the program it will display the full log
//	of the user's actions.
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

	
	//Test commit from clones area
	// Post-Privatization test commit

	// Show application header
	cout << "Start of the Bank System!" << endl;
	cout << "-------------------------" << endl << endl;

	//Creates a bankSystem object named acc1 which aks for user input(id,first,last)
	//then it executes the start function
	string id, fn, ln;
	cout << "Enter your bank ID: ";
	cin >> id;

	cout << endl << "Enter your first name: ";
	cin >> fn;

	cout << endl << "Enter your last name: ";
	cin >> ln;
	cout << endl << endl;

	BankSystem acc1(id, fn, ln);

	acc1.start();


	// Show application close
	cout << "\nEnd of the Bank System!" << endl;
}
