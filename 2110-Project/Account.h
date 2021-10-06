#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <vector> // Allows the use of the 'log'variable
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Account header. Makes an account object that can only deposit to balance.
class Account 
{
protected:
	float balance;
public:
	float getBalance() const;
	void deposit(float amount);
};
