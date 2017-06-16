#include "Tokenizer.hpp"
#include <iostream>
#include <istream>
#include <iterator>
#include <vector>
#include <string>
#include <sstream>
#include <ctype.h>


// Namespace to declare scope for the class and functions
using namespace std;


// Function that takes in a string from STDIN and and splits it up into tokens.
// Returns a pointer to a vector of type string (vector<string>*)
vector<string> * Tokenizer::GetTokens()
{

	int intCount = 0;
	int strCount = 0;

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


		if(isdigit(sub[0]) != 0){
			intCount++;
			}
		else{
			strCount++;
			}
	}
	while(iss); // Will repeat if there is more string

	myVector->pop_back(); // Remove the last element of vector (empty element)
	
	if(myVector->size() > 2){
		cout << "ERROR! Incorrect number of tokens found." << endl;
		GetTokens();
		}
	if(intCount > 1 || strCount < 1){
		cout << "ERROR! Expected STR INT." << endl;
		GetTokens();
		}
	if(!(isdigit(myVector->front()) || intCount = 1){
		GetTokens();
		}
	if(intCount = 1){
		cout << "ERROR! Expected STR." << endl;
		GetTokens();
		}
	if(strCount = 1){
		GetTokens();
		}

	return myVector;

}

