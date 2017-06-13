#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

static int inputs; // Method used to keep track of how many times we asked for input

//This method is used to check for integers, not including doublesor floats.
int tokenCheck(char *e){
	//If there is a space, newline, or string termination, the loop stops
	while(*e != ' ' && *e != '\n' && *e != '\0'){
		if(!isdigit(*e)){ //If it isn't an int, then it returns false
			return 0;
		}
		*e++; //Used to iterate through the entire string
	}
	return 1;
}


//Method used to take in data and break up data into tokens
int scanAndPrint(int argNum){
	inputs++; //Increment the amount of times this method is called.
	if(inputs > argNum){
		return 0;
	}

	char *ptr;
	char buff[66];
	char buff2[66];
	int count = 0;

	int INTTrue = 0; //Used to count number of ints entered
	int STRTrue = 0; //Used to count number of ints entered

	printf("> "); //Caret used to initiate user input
	fgets(buff, 65, stdin); //Takes in no more than 65 chars into the buff array

	strncpy(buff2, buff, 66); //Copy user input into another array for later use

	ptr = strtok(buff2, " "); //Breaks up array into tokens separated by spaces
	count = 1; //Counter for tokens


	while(ptr != NULL){
		

		//If the token is a number (no decimals), then INT count is incremented
		if(tokenCheck(ptr)){
			INTTrue++;
		}
		//If token is not an int, then STR count is incremented
		else{
			if(INTTrue <=0){
				STRTrue++;
			}
		}

		//If the first token is equal to quit (case insensitive), the program finishes
		if((strcasecmp(ptr, "quit\n") == 0) && count <= 1){
			return 0;
		}

		//If token length is longer than 20 chars, error and try again
		if(strlen(ptr) > 21){
			printf("ERROR! Input string too long.\n");
			scanAndPrint(argNum); //Recursive call in case user enters too many tokens
			return 0;
		}

		ptr = strtok(NULL, " "); //Moves on in the char array

		if(ptr != NULL){
			count++; //Increments count for tokens present

		}

		//Checks to see if more than 2 tokens have been entered.
		if(count > 2){
			printf("ERROR! Incorrect number of tokens found.\n");
			scanAndPrint(argNum); //Recursive call in case user enters too many tokens
			return 0;
			}


		//If only 2 ints or 2 string have been entered, print error and try again.
		if(((INTTrue == 2) && (STRTrue <= 0)) || ((INTTrue <= 0) && (STRTrue == 2)) && ptr == NULL){
			printf("ERROR! Expected STR INT.\n");
			scanAndPrint(argNum); //Recursive call in case user enters too many tokens
			return 0;
		} 

		//If only 1 int is entered, print error and try again.
		if(ptr == NULL && INTTrue == 1 && STRTrue == 0){
			printf("ERROR! Expected STR.\n");
			scanAndPrint(argNum);
			return 0;
		}

		//If only 1 STR is entered, print "STR" and try again.
		if(ptr == NULL && INTTrue == 0 && STRTrue == 1){
			printf("STR \n");
			scanAndPrint(argNum);
			return 0;
		}
	}
	

	ptr = strtok(buff, " "); //Breaks up array into tokens separated by spaces
	
	while(ptr != NULL){

		//If the token is a number (no decimals), then "INT" is printed
		if(tokenCheck(ptr)){
			printf("INT ");
			INTTrue++;
		}
		//If token is not an int, then "STR" is printed
		else{
			printf("STR ");
			if(INTTrue <=0){
				STRTrue++;
			}
		}
		ptr = strtok(NULL, " ");
	}
	printf("\n");
	scanAndPrint(argNum); //Will continue to prompt the user for input until they quit.
	return 0;
}



int main(int N, char *argv[]){

	printf("Assignment #2-1, Jose Carlos Gomez, JoseCarlosGomez69@gmail.com\n");
	int argNum;
	
	
	if(N != 2){
		printf("ERROR! Program accepts 1 command line argument.\n");
		return 0;
	}

	if(tokenCheck(argv[1]) != 0){ //If the argument is a number then convert it from string to int
		argNum = atoi(argv[1]);
		if(argNum <= 0){
			return 0;
		}
	}
	if(tokenCheck(argv[1]) == 0){
		printf("ERROR! Expected integer argument\n.");
		return 0;
	}
	scanAndPrint(argNum); //Method that does all of the work
	return 0;
}


