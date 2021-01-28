#include <stdio.h>
#include <math.h>
#include "stack.h"

int factorial_R(int n)
{
	if (n == 1)
	{
	return 1;
	}
	return n * factorial_R(n - 1);
}

int factor(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	return f;
}

void print()
{
	for (int i = 0; i < 10; ++i)
	{
		push(factorial_R(i + 1));
	}
}

int main()
{
	createStack(10);
	print();
	for (int i = 0; i < 10; ++i)
	{
		printf("factorial = %d\n", pop());
	}
	return 0;
}