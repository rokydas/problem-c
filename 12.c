// 2019 -> 7(a)
#include<stdio.h>
int main()
{
    int n, sum=0, mod;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while(n%10 != 0)
    {
        mod = n % 10;
        sum = sum + mod;
        n = n / 10;
    }
    printf("%d", sum);
}
