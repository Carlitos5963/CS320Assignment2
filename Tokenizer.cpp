#include "Tokenizer.hpp"
#include <iostream>
#include <istream>
#include <iterator>



// Namespace to declare scope for the class and functions
using namespace std;

// Protoype for the method GetToken()
std::vector<std::string>* GetToken();

// Class for a tokenizer object
class Tokenizer{
	public:
	vector<string> * GetToken();

};

// Function that takes in a string from STDIN and and splits it up into tokens.
// Returns a pointer to a vector of type string (vector<string>*)
vector<string> * GetToken()
{

	vector<string>* myVector = new vector<string>;
	char arr[66]; // Array to hold user input
	
	cin.getline(arr, 65); // Used to collect input from user
	string str(arr); // Converts contents of array into a string
	istringstream iss(str); // String stream used to break up the string
	
	do
	{
		string sub; // Token to hold tokens temporarily
		iss >> sub; // Will take part of string and place it in the token variable
		myVector->push_back(sub); // Places token into the vector
	}
	while(iss); // Will repeat if there is more string

	myVector->pop_back(); // Remove the last element of vector (empty element)

	return myVector;

}

/*
int main(){
	vector<string>* v = GetToken();
	cout << "Vector size: " << v->size() << endl;
	for (vector<string>::const_iterator i = v->begin(); i != v->end(); i++)
cout << *i << ' ';
}
*/
