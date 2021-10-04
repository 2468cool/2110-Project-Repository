#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "Account.h"
using namespace std;

// Checking Account class header.
// Functions initialize and withdraw from Account balance variable
class CheckingAccount : public Account
{
public:
	void withdraw(float amount);
	CheckingAccount(float amount);
};
