#include "Tokenizer.hpp"
#include <stdio.h>
#include <string>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <vector>
#include <iostream>



int main(){

	vector<string> *v;
	cout << "Assignment #2-2, Jose Carlos Gomez, JoseCarlosGomez69@gmail.com" << endl;
	Tokenizer tok;

	while(1){

		v = tok.GetTokens();
		char *ptr = &v->back()[0];

		//Checks to see if the token says 'quit'
		if(strcasecmp(ptr, "quit\0") == 0 || strcasecmp(ptr, "quit") == 0){
			return 0;
			}
		if(v->size() >= 2){
			cout << "STR INT" << endl;
			}
		if(v->size() == 1){
			cout << "STR" << endl;
			}
		}

	return 1;
}

