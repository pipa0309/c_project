#include <stdio.h>
#include <stdlib.h>

int main()
{

double solve(double a, double b, double c)
{
    double x, a, b, c;

	printf("enter a");
	scanf("%lf", &a);
	printf("enter b");
	scanf("%lf", &b);
	printf("enter c");
	scanf("%lf", &c);
	double D;
	D = b*b - (4*a)*c;
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
    return 0;
}
