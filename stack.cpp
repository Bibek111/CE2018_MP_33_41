#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack()
{
	top = -1;
}

Stack::~Stack(){};

void Stack::push(int data)
{
	if (top >= MAX_STACK_SIZE - 1)
	{
		cout << "Cannot Push" << data << ".Stack is full" << endl;
	}
	else
	{
		top++;
		this->elements[top] = data;
	}
}

int Stack::pop()
{
	if (top < 0)
	{
		return 0;
	}
	else
	{

		return this->elements[top--];
	}
}

int Stack::peak()
{
	if (top < 0)
	{
		return 0;
	}
	else
	{
		return this->elements[top];
	}
}

bool Stack::isEmpty()
{
	if (top < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
