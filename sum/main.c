#include <stdio.h>
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
