#include <stdio.h>
#include <stdlib.h>

double convert(double cel)
{
    return (cel*9/5) + 32;
}


int main()
{
    printf("enter value in degree Celsius\n");
    double cel;
    scanf("%lf", &cel);
    double Fahr = convert(cel);
    printf("in Fahrenheit is %lf\n", Fahr);
    return 0;
}
