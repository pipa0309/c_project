#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("chcp 1251 > nul");

	printf("Hello, world!\n");
	printf("Привет, мир!\n");
	system("pause");

	return 0;
}