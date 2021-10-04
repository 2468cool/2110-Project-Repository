#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "BankSystem.h"
using namespace std;

//
void AddCheckingDialog()
{

}

//
void RemoveCheckingDialog()
{

}

//
void DepositCheckingDialog()
{

}

//
void WithdrawCheckingDialog()
{

}

//
void AddSavingDialog()
{

}

//
void RemoveSavingDialog()
{

}

//
void DepositSavingDialog()
{

}

//
void TransferDialog()
{

}

// While loop to access all functions
// Might be best to use switch statements to loop menu
void start()
{
	int option = 0;
	while (option !=9)
	{
		cout << "=Menu=" << endl;
		// Rest of menu goes here

		cout << "Choose an option[1-9]: ";
		cin >> option;

		// Switch/if statements go here
	}
}

// Likely makes the Client class have an id and first and last name
BankSystem::BankSystem(std::string i, std::string fn, std::string ln)
{

}