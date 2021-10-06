#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "BankSystem.h"
using namespace std;

// These functions rely on the fact that SavingAccount and
// CheckingAccount are both pointers within the Cient class.
// 
// All of these functions have something written to the 'log' variable
// but I dont know how to make that variable and use it yet


// If the pointer for Checking account is not initialized, have the pointer
// point to a new address.
// If the pointer already points to something, tell the user that an account has already been made
// and return to menu
void AddCheckingDialog()
{

}

// Deletes the CheckingAccount object
// If none exists, tell the user no account currently exists and return to menu
void RemoveCheckingDialog()
{

}

// Asks user how much they would like to deposit into the account.
// Deposit into the Checking Account.
// If the account does not exist, tell the user no account exists and return to menu
void DepositCheckingDialog()
{

}

// Ask the user how much they want to withdraw, make sure that it does not go below zero.
// Withdraw that much money from Checking Account.
// If the account does not exist, tell the user no account exists and return to menu
void WithdrawCheckingDialog()
{

}

// If the pointer for Saving account is not initialized, have the pointer
// point to a new address.
// If the pointer already points to something, tell the user that an account has already been made
// and return to menu
void AddSavingDialog()
{

}

// Deletes the SavingAccount object
// If none exists, tell the user no account currently exists and return to menu
void RemoveSavingDialog()
{

}

// Asks user how much they would like to deposit into the account.
// Deposit into the Saving Account.
// If the account does not exist, tell the user no account exists and return to menu
void DepositSavingDialog()
{

}

// Ask the user how much they want to withdraw, make sure that it does not go below zero.
// Withdraw that much money from Saving account and move it into the Checking Account.
// If neither account exists, tell the user that account does not exist and return to menu
// Check saving account first, then check Checking Account
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

		switch (option)
		{
		case 1:
			AddCheckingDialog();
		case 2:
			RemoveCheckingDialog();
		case 3:
			DepositCheckingDialog();
		case 4:
			// case 4's option
		// rest of switch statement for whole menu goes here
		default: // Unsure if default is actually needed
			break;
		}

	}
}

// Likely makes the Client class have an id and first and last name
BankSystem::BankSystem(std::string i, std::string fn, std::string ln)
{

}