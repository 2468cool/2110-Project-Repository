#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <vector> // Allows the use of the 'log'variable
#include "BankSystem.h"
using namespace std;

// These functions rely on the fact that SavingAccount and
// CheckingAccount are both pointers within the Cient class.
// 
// Everything you write to the log, use 
// log.push_back("<message here>");


// If the pointer for Checking account is not initialized, have the pointer
// point to a new address. Write to log
// If the pointer already points to something, tell the user that an account has already been made
// and return to menu. Write to log
void BankSystem::AddCheckingDialog()
{
	if (oneClient.checking != nullptr)
	{
		cout << "The client already has a checking account." << endl;
		log.push_back("Invalid attempt to overwrite a checking account.");
		start();
	}
	else
	{
		int amm;
		cout << "Please enter a starting balance: ";
		cin >> amm;
		oneClient.checking = new CheckingAccount(amm);
		log.push_back("Checking account successfuly created");
		start();
	}
}

// Deletes the CheckingAccount object
// If none exists, tell the user no account currently exists and return to menu
void BankSystem::RemoveCheckingDialog()
{

}

// Asks user how much they would like to deposit into the account.
// Deposit into the Checking Account. Write to log
// If the account does not exist, tell the user no account exists and return to menu.
// Write to log
void BankSystem::DepositCheckingDialog()
{

}

// Ask the user how much they want to withdraw, make sure that it does not go below zero.
// Withdraw that much money from Checking Account. Write to log
// If the account does not exist, tell the user no account exists and return to menu.
// Write to log
void BankSystem::WithdrawCheckingDialog()
{

}

// If the pointer for Saving account is not initialized, have the pointer
// point to a new address. Write to log
// If the pointer already points to something, tell the user that an account has already been made
// and return to menu. Write to log
void BankSystem::AddSavingDialog()
{
	if (oneClient.saving != nullptr)
	{
		cout << "The client already has a saving account." << endl;
		log.push_back("Invalid attempt to overwrite a saving account.");
		start();
	}
	else
	{
		int amm;
		int rate;
		cout << "Please enter a starting balance: ";
		cin >> amm;
		cout << "Please enter a savings rate: ";
		cin >> rate;
		oneClient.saving = new SavingAccount(amm, rate);
		log.push_back("Saving account successfuly created");
		start();
	}
}

// Deletes the SavingAccount object. Write to log
// If none exists, tell the user no account currently exists and return to menu. Write to log
void BankSystem::RemoveSavingDialog()
{

}

// Asks user how much they would like to deposit into the account.
// Deposit into the Saving Account. Write to log
// If the account does not exist, tell the user no account exists and return to menu.
// Write to log
void BankSystem::DepositSavingDialog()
{

}

// Ask the user how much they want to withdraw, make sure that it does not go below zero.
// Withdraw that much money from Saving account and move it into the Checking Account.
// Write to log
// If neither account exists, tell the user that account does not exist and return to menu.
// Write to log
// Check saving account first, then check Checking Account
void BankSystem::TransferDialog()
{

}

// While loop to access all functions
// Might be best to use switch statements to activate an option
void BankSystem::start()
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