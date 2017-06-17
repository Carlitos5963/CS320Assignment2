#include "Tokenizer.hpp"
#include <stdio.h>
#include <string>
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
		if(isdigit(v->back()[0]) != 1){
			cout << "STR ";
			}
		else{
			cout << "INT ";
			}
		if(isdigit(v->back()[1]) != 1){
			cout << "STR " << endl;
			}
		else{
			cout << "INT " << endl;
			}
		}

	return 1;
}

