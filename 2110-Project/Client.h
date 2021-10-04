#pragma once
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "CheckingAccount.h"
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Client header. Makes a client class that draws from both the
// CheckingAccount and SavingAccount classes.
class Client 
{
private:
	int id;
	std::string firstName;
	std::string lastName;
public:
	CheckingAccount *checking;
	// SavingAccount *saving;
	void setID(int i);
	int getID() const;
	void setName(std::string fn, std::string ln);
	std::string getFirstName() const;
	std::string getLastName() const;
	Client();
	Client(std::string i, std::string fn, std::string ln);
};