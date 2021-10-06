#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <vector> // Allows the use of the 'log'variable
#include "CheckingAccount.h"
using namespace std;

class SavingAccount : public Account
{
private:
	float savingRate;

public:
	void setSavingRate(float rate);
	float getSavingRate() const;
	void transfer(CheckingAccount& checkingAcc, float amount);
	SavingAccount(float amount, float rate);

};
