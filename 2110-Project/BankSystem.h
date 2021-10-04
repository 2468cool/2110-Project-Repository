#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "Client.h"
using namespace std;

class BankSystem
{
private:
	// Unsure what a vector<std::string> is suppose to be yet
	//vector<std::string> log;
	Client oneClient;

	// Assignment does not say what these do so not fully sure to their purpose yet
	void AddCheckingDialog();
	void RemoveCheckingDialog();
	void DepositCheckingDialog();
	void WithdrawCheckingDialog();
	void AddSavingDialog();
	void RemoveSavingDialog();
	void DepositSavingDialog();
	void TransferDialog();

public:
	// This function seems to be able to access all private functions
	void start();

	// Guessing that 'string i' will be converted to an int in the code
	BankSystem(std::string i, std::string fn, std::string ln);
};