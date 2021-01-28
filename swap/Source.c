#include <stdio.h>
#include <math.h>


int f(); // оъ€вление ф-и h файл

int f() // определение с файл
{
	return 4;
}

char f1(char a)
{
	return a;
}

double f2(double a)
{
	return -a;
}

double f3(double x, double y, double z)
{
	double d = (x + y + z);
	double del = d / 3;
	return del;
}

int f4(int* p)
{
	return *p;
}

void zero(int* z)
{
	*z = 0;
}

void f5(int* p1)
{
	int old_value = *p1;
	*p1 = -old_value;
}

void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int a = f();
	char ch = f1('!');
	double n = f2(a);
	double a1 = f3(f(), f2(f()), 1);
	int* pa = &a;
	int a2 = f4(pa); // int* p = pa 
	zero(&a);
	f5(&a2);
	int a1 = 1;
	a2 = 2;
	//swap(a1, a2); // int a = a1; int b = a2;
	swap(&a1, &a2);
	return 0;

	int* - это адрес,
}