#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numOfElements = 20;
	createStack(numOfElements);
	for (int i = 0; i < numOfElements; ++i)
	{
		push(i);
		printf("Push(%d)\n", i);
/*		if (numOfElements > 5)
		else */
	}
	for (int i = 0; i < numOfElements; ++i)
	{
		int value = pop();
		printf("Pop(%d)\n", value);
	}
	deleteStack();
}
