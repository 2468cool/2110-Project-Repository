#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "BankSystem.h"
using namespace std;

// My guess is that this initializes the CheckingAccount object from the Client class
void AddCheckingDialog()
{

}

// My guess is that this deletes the CheckingAccount object from the Client class
void RemoveCheckingDialog()
{

}

// Likely just deposits money to checking account
void DepositCheckingDialog()
{

}

// Likely just withdraws money from checking account
void WithdrawCheckingDialog()
{

}

// My guess is that this initializes the SavingAccount object from the Client class
void AddSavingDialog()
{

}

// My guess is that this deletes the SavingAccount object from the Client class
void RemoveSavingDialog()
{

}

// Likely just adds money to checking account
void DepositSavingDialog()
{

}

// Likely just moves money from Saving object to Checking object
void TransferDialog()
{

}

// While loop to access all functions
// Might be best to use switch statements to activate an option
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