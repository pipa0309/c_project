#include<stdio.h>
#include<time.h>

#define N 5

void array(int* A_Begin, int count)
{
	for (int i = 0; i < count; ++i)
	{
		int result = *A_Begin + i;
		printf("%d\n", result);
	}
}

//void printfA
//srand((unsigned)time(NULL));

int main()
{
	int size = N;
	int A[] = { 1, 2, 3, 4, 5};
	array(A, size);
	//srand()
	return 0;
}