#include <stdio.h>
#include <math.h>


int solve(double a, double b, double c)
{
	// calculate descr
	const double D = b * b - (4 * a) * c;

	// calculate roots
	double x1 = 0;
	double x2 = 0;
	int numOfRoots = 0;
	if (D > 0)
	{
		numOfRoots = 2;
		x1 = ((-1.0 * b) - sqrt(D)) / (2.0 * a);
		x2 = ((-1.0 * b) + sqrt(D)) / (2.0 * a);
		printf("root1 %lf root2 %lf\n", x1, x2);
	}
	else if (D == 0)
	{
		numOfRoots = 1;
		x1 = ((-1.0 * b) - sqrt(D)) / (2.0 * a);
		printf("root %lf\n", x1);
	}
	else
	{
		numOfRoots = 0;
		printf("DNE\n");
	}
	return numOfRoots;
}

int main()
{

/*	// read arguments
	double a, b, c;
	printf("enter a");
	scanf_s("%lf", &a);
	printf("enter b");
	scanf_s("%lf", &b);
	printf("enter c");
	scanf_s("%lf", &c);

	solve(a, b, c);*/


	//- 2, 5, 1  (x1 = 2.6861, x2 = -0.18614
	solve(-2, 5, 1);

	//55, 10, 1  (не имеет решений)
	solve(55, 10, 1);

	//16, -8, 1  (d = 0)  x = 0.25
	solve(16, -8, 1);

	return 0;
}

