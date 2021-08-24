// 2018 -> 2(c)
#include<stdio.h>
int main()
{
    double c,f;
    printf("Enter the celsius: ");
    scanf("%lf", &c);
    f = ((c/5)*9)+32;
    printf("The fahrenheit is %lf", f);
    return 0;
}
