#include <windows.h>
#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;


void runStack()
{
	try
	{
		Stack * stack = new Stack();
		stack->push(1);
		stack->push(2);
		stack->push(3);
		cout << stack->pull() << endl;
		cout << stack->pull() << endl;
		cout << stack->pull() << endl;
		cout << stack->pull() << endl;
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
}

void runQueue()
{
	try
	{
		Queue * queue = new Queue();
		queue->push(4);
		queue->push(5);
		queue->push(6);
		cout << queue->pull() << endl;
		cout << queue->pull() << endl;
		cout << queue->pull() << endl;
		cout << queue->pull() << endl;
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
}

int main(void)
{
	runStack();
	runQueue();
	system("pause");

	return 0;
	//comment2
}