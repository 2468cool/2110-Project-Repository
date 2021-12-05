#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <vector> // Allows the use of the 'log'variable
#include "BankSystem.h"
#include "Client.cpp"
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
			
		}
		else
		{
			int amm;
			cout << "Please enter a starting balance: ";
			cin >> amm;
			oneClient.checking = new CheckingAccount(amm);
			log.push_back("Checking account successfuly created");
			
		}
}

// Deletes the CheckingAccount object
// If none exists, tell the user no account currently exists and return to menu
void BankSystem::RemoveCheckingDialog()
{
	if (oneClient.checking == nullptr)
		{
			cout << "The client does not have a checking account" << endl;
			log.push_back("Invalid attempt to remove a non-existing checking account.");
			
		}
		else
		{
			cout << "Checking account was removed" << endl;
			oneClient.checking = nullptr;
			log.push_back("The client does not have a checking account.");
			
		}
	
}

// Asks user how much they would like to deposit into the account.
// Deposit into the Checking Account. Write to log
// If the account does not exist, tell the user no account exists and return to menu.
// Write to log
void BankSystem::DepositCheckingDialog()
{
	if (oneClient.checking == nullptr)
		{
			cout << "The client does not have a checking account" << endl;
			log.push_back("Invalid attempt to deposit non-exisiting checking account.");
			
			
		}
		else
		{
			string amount;
			cout << "How much would you like to deposit?: ";
			cin >> amount;
			oneClient.checking->deposit(stof(amount));
			cout << amount + " successfully deposited in checking account.";
			log.push_back("$"+amount + " successfully deposited in checking account.");
		}
}

// Ask the user how much they want to withdraw, make sure that it does not go below zero.
// Withdraw that much money from Checking Account. Write to log
// If the account does not exist, tell the user no account exists and return to menu.
// Write to log
void BankSystem::WithdrawCheckingDialog()
{
	
		if (oneClient.checking == nullptr)
		{
			cout << "The client does not have a checking account" << endl;
			log.push_back("Invalid attempt to withdraw from a non-exisiting checking account.");
			
		}
		else
		{
			string amount;
			cout << "How much would you like to withdraw?: ";
			cin >> amount;
			oneClient.checking->withdraw(stof(amount));
			log.push_back("$" + amount + " successfully withdrawn in checking account.");
		}
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
			
		}
		else
		{
			int amm;
			float rate;
			cout << "Please enter a starting balance: ";
			cin >> amm;
			cout << "Please enter a savings rate: ";
			cin >> rate;
			oneClient.saving = new SavingAccount(amm, rate);
			log.push_back("Saving account successfuly created");
		}
}

// Deletes the SavingAccount object. Write to log
// If none exists, tell the user no account currently exists and return to menu. Write to log
void BankSystem::RemoveSavingDialog()
{
	if (oneClient.saving == nullptr)
		{
			cout << "The client does not have a saving account" << endl;
			log.push_back("Invalid attempts to remove a non-existing saving account.");
			
		}
		else
		{
			cout << "Savings account was removed" << endl;
			log.push_back("Saving account successfully removed.");
			oneClient.saving = nullptr;
		}
}

// Asks user how much they would like to deposit into the account.
// Deposit into the Saving Account. Write to log
// If the account does not exist, tell the user no account exists and return to menu.
// Write to log
void BankSystem::DepositSavingDialog()
{
		if (oneClient.saving == nullptr)
		{
			cout << "The client does not have a savings account" << endl;
			log.push_back("Invalid attempt to deposit in a non-existing saving account.");
			
		}
		else
		{
			string amount;
			cout << "How much would you like to deposit?: ";
			cin >> amount;
			oneClient.saving->deposit(stof(amount));
			log.push_back("$" + amount + " successfully deposited in saving account.");
		}	
	
}

// Ask the user how much they want to withdraw, make sure that it does not go below zero.
// Withdraw that much money from Saving account and move it into the Checking Account.
// Write to log
// If neither account exists, tell the user that account does not exist and return to menu.
// Write to log
// Check saving account first, then check Checking Account
void BankSystem::TransferDialog()
{
		if (oneClient.saving == nullptr)
		{
			cout << "The client does not have a saving account." << endl;
			log.push_back("Invalid attempt to use a non-existing saving account.");
		}
		else if (oneClient.checking == nullptr)
		{
			cout << "The client does not have a saving account." << endl;
			log.push_back("Invalid attempt to use a non-existing checking account.");
		}
		else
		{
			string amount;
			cout << "Enter an amount to transfer: ";
			cin >> amount;

			oneClient.saving->transfer(oneClient.checking, stof(amount));
			oneClient.checking->deposit(stof(amount));
			log.push_back("$" + amount + " successfully transferred from saving to checking account.");

		}
}

// While loop to access all functions
// Might be best to use switch statements to activate an option
void BankSystem::start()
{
	int option = 0;
	while (option !=9)
	{
		cout << "=Menu=" << endl;
		cout<<"1. Add a Checking Account"<<endl;
		cout<<"2. Remove checking Account"<<endl;
		cout<<"3. Deposit into Checking Account" <<endl;
		cout<<"4. Withdraw from Checking Account" <<endl;
		cout<<"5. Add a Saving Account" <<endl;
		cout<<"6. Remove Saving Account" <<endl;
		cout<<"7. Deposit into Saving Account" <<endl;
		cout<<"8. Transfer from Saving to Checking Account"<<endl;
		cout<<"9. Exit"<<endl;
		

		cout << "Choose an option[1-9]: ";
		cin >> option;

		switch (option)
		{
		case 1:
			AddCheckingDialog();
			break;
		case 2:
			RemoveCheckingDialog();
			break;
		case 3:
			DepositCheckingDialog();
			break;
		case 4:
			WithdrawCheckingDialog();
			break;
		case 5:
			AddSavingDialog();
			break;
		case 6:
			RemoveSavingDialog();
			break;	
		case 7:
			DepositSavingDialog();
			break;
		case 8:
			TransferDialog();
			break;
		case 9:
			break;
				
		default: 
			cout<<" Invalid Choice.Choose again.";
			start();
			break;
		}

	}
}

BankSystem::BankSystem(std::string i, std::string fn, std::string ln)
{
	oneClient.setName(fn, ln);
	oneClient.setID(stoi(i));
}
