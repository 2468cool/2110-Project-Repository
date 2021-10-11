#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <vector> // Allows the use of the 'log'variable
#include "Client.h"
using namespace std; // So "std::cout" may be abbreviated to "cout"

// Sets the id of the Client
void Client::setID(int i)
{
	id = i;
}
// Returns the id of the client
int Client::getID() const
{
	return id;
}
// Sets the first and last name of the client
void Client::setName(std::string fn, std::string ln)
{
	firstName = fn;
	lastName = ln;
}
// Returns the first name of the client
string Client::getFirstName() const
{
	return firstName;
}
// returns the last name of the client
string Client::getLastName() const
{
	return lastName;
}
//Default constructor to fix an error temporarily, unless this is the only way to make it work
Client::Client()
{

}
// Sets the id and name of client
Client::Client(std::string i, std::string fn, std::string ln)
{
	id = stoi(i);
	firstName = fn;
	lastName = ln;
}
