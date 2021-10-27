
#include <iostream>
#include <string>

using namespace std;


//first_input_Last_out :)
template<typename T>
class Stack
{
private:
	T *stack_array;
	int MaxSize;
	int top = -1;

public:
	Stack(const int& size_of_Stack);
	~Stack();

	T pop();
	void push_back(const T& item_input);
};

///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	Stack<string>testone(4);
	string A[]={"first","input","Last","out"};
	for (int i = 0; i < 4; i++)
	{
		testone.push_back(A[i]);
	}
	
	for (int i = 0; i < 4; i++)
	{
		cout<<testone.pop()<<endl;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

template<typename T>
Stack<T>::Stack(const int& size_of_Stack)
{
	this->stack_array = new T[size_of_Stack];
	this->MaxSize = size_of_Stack;
}

template<typename T>
Stack<T>::~Stack()
{
	delete[]stack_array;	
}

template<typename T>
T Stack<T>::pop()
{
	if (this->top < 0)
	{
		cerr << "\nthe Stack is MT :( \n";
		exit(-1);
	}
	T TMP_Return = stack_array[this->top--];
	return	TMP_Return;
}

template<typename T>
void Stack<T>::push_back(const T& item_input)
{
	this->top += 1;
	if (this->top  >=this->MaxSize)
	{
		cerr << "\nThe stack is full :( \n";
		exit(-1);
	}
	stack_array[this->top] = item_input;
}

///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////
