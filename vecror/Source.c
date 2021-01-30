#include <stdio.h>
#include <math.h>

#define N 3

void setVector(double* pVector, double x, double y, double z)
{
	pVector[0] = (x);
	pVector[1] = (y);
	pVector[2] = (z);
}

void printVector(double* pVector)
{
	printf("vector = { %.1f, %.1f, %.1f }\n", pVector[0], 
	pVector[1], pVector[2]);
}

int main()
{
	double vector[N] = { 1, 2, 3 };
	setVector(vector, 0 , 0 , 0);
	printVector(vector);
	setVector(vector, 5, 6, 8);
	printVector(vector);
	return 0;
}