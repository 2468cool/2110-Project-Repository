#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <vector> // Allows the use of the 'log'variable
#include "CheckingAccount.h"
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Decreases balance with parameter function takes in
// Make sure that the amount of money being taken does not let the
// balance dip below zero

void CheckingAccount::withdraw(float amount)
{
	/*
	if ((balance - amount) < 0)
	{
		cout << "This action cannot be performed. Action would result in negative balance."
			<< endl;
	}
	else
	{
		balance = getBalance() - amount;
	}
    */
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
			balance = getBalance() - amount;
		}
	}
	catch (float amt) {
		cout << "Transfer amount " << amt << " is greater than the account balance of " << balance;
	}
}

// Initializes blanace with the amount it takes in
CheckingAccount::CheckingAccount(float amount)
{
    balance = amount;
}

float Account::getBalance() const
{
	return balance;
}

void Account::deposit(float amount)
{
	balance = balance + amount;
}
