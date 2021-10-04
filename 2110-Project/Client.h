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
	string firstName;
	string lastName;
public:
	CheckingAccount *checking;
	// SavingAccount saving;
	void setID(int i);
	int getID() const;
	void setName(string fn, string ln);
	string getFirstName() const;
	string getLastName() const;
	Client(string i, string gn, string ln);
};