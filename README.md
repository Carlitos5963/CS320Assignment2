Assignment 2:

prog2_1.cpp - This is a C++ file. This program takes exacty one CMD line arg that should be an integer. The program will then ask the user for input as many times as the CMD line arg stated. The user can quit whenever by typing "quit" or they can just keep entering input until the program terminates.

prog2_2.cpp - This is a C++ file. This class does what program 1 does but also uses the newly created Tokenizer.cpp class. The difference between program 1 and 2 is that the Tokenizer used in program 2 detects when input is correct and when it is wrong.

prog2_3.cpp - Program 3 takes in a single CMD line argument to determine how many inputs are taken in. The program takes valid input and prints error messages if input is invalid. This program also implements a stack and pushes and pops tokens depending on the values. Before the program quits, the contents of the stack are printed.

Tokenizer.cpp - This is a C++ class with no main function. This class is meant to be implemented. This class takes in 2 tokens and places them in a vector. The Tokenizer accepts no more than 2 tokens or else an error message pops up and the user is prompte to try again. The only way to keep going is to either type a single string, type a string followed by an integer, or to type "quit" (case insensitive). The function returns a pointer pointing to the vector. 

Tokenizer.hpp - This is the class header to Tokenizer.cpp. It list the only function that the class has.

Stack.cpp - This stack is a C++ class that can take in any data type. It has a constructor, Push, Pop, and Print methods. This class is used with program 3 to hold and organize the tokens pushed into it. If Push(d) is called, the object being passed in the parameter is placed on top of the stack. With the pop() method (no parameters taken) the top item of the stack is taken off. The Print() method takes everything that is on the stack and prints them in the following format [top middle bottom.]

Stack.hpp - This is the Stack class header. This holds all of the member functions and variables that the Stack class is composed of.
