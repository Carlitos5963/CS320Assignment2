#include "Stack.hpp"
#include "Tokenizer.hpp"
#include <stdio.h>
#include <string>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <vector>
#include <iostream>



int main(){

	// Pointer for a Vector of type string to point to tokens 
	vector<string> *v;
	cout << "Assignment #2-3, Jose Carlos Gomez, JoseCarlosGomez69@gmail.com" << endl;
	Tokenizer tok; //Instance of the Token object
	Stack<string> stack;
	

	// Set to run until told to quit
	while(1){

		v = tok.GetTokens(); //Set pointer equal to a vector
		char *ptr = &v->back()[0];

		//Checks to see if the token says 'quit'
		if(strcasecmp(ptr, "quit\0") == 0 || strcasecmp(ptr, "quit") == 0){
			stack.print();
			return 0;
			}
		//If there are 2 tokens at this point then they must be a string and an int
		if(v->size() >= 2){
			cout << "STR INT" << endl;
			}
		//If there is 1 string and its not "quit" then it must just be a string
		if(v->size() == 1){
			cout << "STR" << endl;
			}
		}

	return 1;
}

