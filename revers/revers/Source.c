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

void reverse(int* pBegin, int count)
{
	// прочитать весь массив
	for (int i = 0; i < count; ++i)
	{
		printf("%d\n", *(pBegin + i)); //pBegin[i]
	}

	// записать все элементы массива
	for (int i = 0; i < count; ++i)
	{
		*(pBegin + i) = 0; //pBegin[i] = 0
	}

	// помен€ть местами 1 и (i + 1) элем-ты
	for (int i = 0; i < count; ++i)
	{
		/*swap(pBegin, pBegin[4]- i - 1); */
		int r = count - i - 1;
		printf("%d\n", r);
	}

	// помен€ть местами 1 и (i + 1) элем-ты
/*for (int i = 0; i < count; ++i)
{
	int tmp1 = array[i];
	array[i] = count - i - 1;
	count - i - 1 = tmp1;
	/*printf("%d\n ", r);
}	*/


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
	a1 = 1;
	a2 = 2;
	//swap(a1, a2); // int a = a1; int b = a2;
	swap(&a1, &a2);
	int array[] = { 1, 2, 3, 4, 5 };
	int size = 5;
	reverse(array, size);


	//	int* - это адрес,
}
