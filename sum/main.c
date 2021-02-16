/*#include <stdio.h>
#include <stdlib.h>

int sum()
{
    int x;
	printf("enter number for calculate sum\n");
    scanf("%d", &x);
	int sum = (x * (x + 1)) / 2;
    printf("%d\n", sum);
}

int main()
{
    sum();
	return sum;
}
*/


#include<stdio.h>
#include<time.h>

#define N 3

void array(int* A_arg[N], int count_arg)
{
	int result = *A_arg[N];
	printf("%d\n", result);
}

//srand((unsigned)time(NULL));


int main()
{
	int count = N;
	int A[N] = { 0 };
	array(&A, count);
	//srand()
	return 0;
}
