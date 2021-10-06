#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <vector> // Allows the use of the 'log'variable
#include "Client.h"
using namespace std;

class BankSystem
{
private:
	// Now able to use the vector variable
	std::vector<std::string> log;
	Client oneClient;

	// Assignment has detailed descriptions for each of these
	// Putting comments on basic gist of each in .cpp file
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