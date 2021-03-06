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
	Stack<string> stack; //The stack to hold tokens
	int count = 0;

	// Set to run until told to quit
	while(1){

		count++;
		v = tok.GetTokens(); //Set pointer equal to a vector
		char *ptr = &v->front()[0]; //Pointer to point at first word



		//If first token says 'pop', then pop top stack token off of stack
		if((strcmp(ptr, "pop\0") == 0 || strcmp(ptr, "pop") == 0) && v->size() == 1){
			stack.Pop(); //Pop off top stack element
			}

		//If first token says 'push', then push second token into stack
		if((strcmp(ptr, "push\0") == 0 || strcmp(ptr, "push") == 0)){
			stack.Push(v->back()); //Push 2nd token on top of stack
			//return 0;
			}
		//Checks to see if the token says 'quit'
		if((strcasecmp(ptr, "quit\0") == 0 || strcasecmp(ptr, "quit") == 0) || count > 6)		{
			stack.Print(); //Print stack before program exits
			return 0;
			}

		}

	return 1;
}

