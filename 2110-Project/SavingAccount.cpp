#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <vector> // Allows the use of the 'log'variable
#include "SavingAccount.h"
using namespace std;

// Sets the rate for saving
void SavingAccount::setSavingRate(float rate)
{
	savingRate = rate;
}

// Returns the rate
float SavingAccount::getSavingRate() const
{
	return savingRate;
}

// Balance cannot go below 0
// Moves the 'amount' from saving account to checking account
void SavingAccount::transfer(CheckingAccount& checkingAcc, float amount)
{
	string errorMessage = "It cannot withdraw an amount greater than the balance. No changes were done to the balance.";

	try {
		if (amount > balance) {
			throw errorMessage;
		}
		 else if ((balance - amount) < 0)
		{
			cout << "This action cannot be performed. Balance would go below zero." << endl;
		}
		else
		{
			balance = balance - amount;
			checkingAcc.deposit(amount);
		}
	}
	catch (float amt) {
		cout << "Transfer amount " << amt << " is greater than the account balance of " << balance;
	}
}

// Initializes balance for account and rate of saving
SavingAccount::SavingAccount(float amount, float rate)
{
	balance = amount;
	savingRate = rate;
}

float Account::getBalance() const
{
	return balance;
}

void Account::deposit(float amount)
{
	balance = balance + amount;
}
