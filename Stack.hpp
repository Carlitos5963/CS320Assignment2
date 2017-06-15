#include <iostream>

using namespace std;

template <class T>
class Stack{
public:

	void Stack <T>::Push(T d); 
	T Stack <T>::Pop();
	void Stack <T>::Print();
};

// Method used to push data onto the stack
template <class T> 
void Stack <T>::Push(T d){
	this->data.push_back(d);
}

// Method used to pop top item on stack off of stack
template <class T> 
T Stack <T>::Pop(){
	if(this->data.size() == 0){ // Checks to see if stack is empty
		cout << "Stack Empty!" << endl;
		return -1;
	}
	int ret = this->data[this->data.size()-1]; // Takes the stack size minus 1
	this->data.pop_back(); // Pops top item off of stack
	return ret;
}

// Method used to print out entire stack
template <class T> 
void Stack <T>::Print(){
	// For loop used to print out every element
	for(int i = 0; i < this->data.size(); i++){
		cout << this->data[i] << " ";
		}
	cout << endl;
}

template class Stack<T>;
