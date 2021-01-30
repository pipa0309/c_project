#include <stdio.h>
#include <math.h>

#define N 5

void printArray(int* pBegin, int count)
{
	for (int i = 0; i < count; ++i)
	{
		printf("%d ", *(pBegin + i));
	}
	printf("\n");
}

void sequence(int* array, int count)
{
	for (int i = 0; i < count; ++i)
	{
		array[i] = i + 1;
	}
}

//nado dopisat' ))
void revers(int* array, int count)
{
	int i;
	for (int i = 0; i < count; ++i)
	r = count - i - 1;
	printf("%d", r);
}

int main()
{
	int array[N] = {0};
	printArray(array, N);
	sequence(array, N);
	printArray(array, N);
	revers(array, N);
	return 0;
}