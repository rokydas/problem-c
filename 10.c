// 2019 -> 5(b)
#include<stdio.h>
int main()
{
    int i=1,n,j;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i; i <= n; i++)
    {
        for(j=1; j <= i; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}
