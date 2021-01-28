#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sum(int n)
{
	int result = 0;
	for (int i = 1; i <= n; i ++)
	{
		result = result + i;
	}
	printf("%d", result);
	return result;
}

int main()
{
	int result = sum;
	sum(55);
	return 0;
}