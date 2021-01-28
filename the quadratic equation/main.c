#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char** argv)
{
    // a*x^2 + b*x + c = 0
    // 2*x^2 + 3*x + 4 = 0

    double a = 2;
    double b = 3;
    double c = 4;

    if (solve(a, b, c))
    {
        printf("solve return TRUE\n");
    }
    else
    {
        printf("solve return FALSE\n");
    }
}
    return 0;
}
