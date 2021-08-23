#include <stdio.h>
int main()
{
    double i, sum = 0.0;
    for (i = 1; i < 100; i=i+2)
    {
        sum = sum + 1/i;
    }
    printf("Sum is %f", sum);
    return 0;
}



