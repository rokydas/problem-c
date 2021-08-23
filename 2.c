#include<stdio.h>
int main()
{
    int i,n,sum = 0;
    n = 3;
    for(i = 1; i <= 3; i++) {
        sum = sum + (i*i);
    }
    printf("The sum is %d", sum);
}
