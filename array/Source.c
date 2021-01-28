#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h> 

void f(int* a, int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d\n", a[i]);
    }
}
/*
void fillRandom(int* a, int size)
{
    for (int i = 0; i < size; ++i)
    {
        a[i] = rand()%size;
    }
}
*/
int main()
{
    //srand(time(0)); // чтобы случайные числа генерировались по-разному
    int array[11];
    //int arraySize = 11;
    //fillRandom(array, arraySize);
    f(array, arraySize);
    return 0;
}
/*
int main()
{
    int array[10] = { 0 };
    f(array);
    return 0;
}
*/