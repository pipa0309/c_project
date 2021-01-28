#include "stack.h"
#include <stdlib.h> // malloc and free

int top = 0;
int* stack = NULL;

void createStack(int numOfElements)
{
	/*if (numOfElements <= 5)
	{
		stack = malloc(sizeof(int) * numOfElements);
	}
	else 
	{
		stack = malloc(sizeof(int) * (numOfElements + (numOfElements - 5)));
	}*/




}

void push(int number)
{
	stack[top] = number;
	++top;
}

int pop()
{
	int numFromStack = stack[top - 1];
	--top;
	return numFromStack;
}

void deleteStack()
{
	free(stack);
	top = 0;
}

/*void chek(int ch)
{
	ch = 0;
	if ()
}*/