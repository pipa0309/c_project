#include <stdio.h>
#include <math.h>

#define N 10

void printArray(int* pBegin, int count)
{
	for (int i = 0; i < count; ++i)
	{
		printf("%d", *(pBegin + i));
		printf("%d", *(pBegin + i));
	}
}

void sequence(int* array, int count)
{
	for (int i = 0; i < count; ++i)
	{
		array[i] = i + 1;
	}
}

int main()
{
	int array[N] = {0};
	printArray(array, N);
	sequence(array, N);
	printArray(array, N);
	return 0;
}