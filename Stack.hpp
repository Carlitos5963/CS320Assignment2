#include <iostream>

using namespace std;

template <class T>
class Stack{
public:

	void Stack<T>::Push(T d); 
	T Stack<T>::Pop();
	void Stack<T>::Print();
	Stack();
};


