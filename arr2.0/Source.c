#include <stdio.h>
#include <math.h>

#define N 12

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

void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void testSwap()
{
	printf("start test swap\n");
	int x = 0;
	int y = 1;
	printf("x = %d; y = %d\n", x, y);
	swap(&x, &y);
	printf("x = %d; y = %d\n", x, y);
}

//nado dopisat' ))
void revers(int* array, int count)
{
	int j = count - 1;
	for (int i = 0; i < j; ++i, --j)
	{
		int* first = &array[i];
		int* last = &array[j]; 
		swap(first, last);
	}
}

void testRevers()
{
	printf("start test revers\n");
	int a[N] = { 0 };
	sequence(a, N);
	printArray(a, N);
	revers(a, N);
	printArray(a, N);
}

int main()
{
	testRevers();
	//testSwap();
	return 0;
}