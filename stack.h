
#define MAX_STACK_SIZE 100

class Stack
{
public:
	Stack();
	~Stack();

	void push(int data);
	int pop();
	int peak();
	bool isEmpty();

private:
	char elements[MAX_STACK_SIZE];
	int top;
};