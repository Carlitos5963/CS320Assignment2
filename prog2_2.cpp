#include <stdio.h>
#include <string>
#include <ctype.h>
#include <stdlib.h>
#include <vector>


//Method used to take in data and break up data into tokens
int scanAndPrint(){

	Tokenizer tok = new Tokenizer();
	vector<string>* v = new vector<string>;
	v = tok.GetToken();

}

int main(){

	scanAndPrint(); //Method that does all of the work
	return 0;
}

