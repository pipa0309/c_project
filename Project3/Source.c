#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

int main()
{
	double a = 2, b = 3, c = 4;
	double D;
	D = b*b - (4*a)*c;

	printf("%lf\n", D);

	double res(double D);
	if (D > 0)
	{
		printf("one root %lf", D);
		}
		
	/*double x, a, b, c;
	ouble D;
	D = b*b - (4*a)*c;
	printf("enter a");
	scanf("%lf", &a);
	printf("enter b");
	scanf("%lf", &b);
	printf("enter c");
	scanf("%lf", &c);
	if (D >= 0)
	{
		x = (-1*b - sqrt(D)) / 2*a;
		printf("first root %lf", x);
		x = (-1*b + sqrt(D)) / 2*a;
		printf("last root %lf", x);
	}
	else 
	{
		printf("DNE");
	}
	*/




	return 0;
}