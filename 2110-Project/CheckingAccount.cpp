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
    balance = getBalance() - amount;
}

// Initializes blanace with the amount it takes in
CheckingAccount::CheckingAccount(float amount)
{
    balance = amount;
}