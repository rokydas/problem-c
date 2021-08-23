#include<stdio.h>
int main()
{
    int x,y,z,temp;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    printf("Enter the value of z: ");
    scanf("%d", &z);
    printf("Before rotating: \n");
    printf("x is %d\n",x);
    printf("y is %d\n",y);
    printf("z is %d\n",z);


    temp = x;
    x = y;
    y = z;
    z = temp;

    printf("After rotating: \n");
    printf("x is %d\n",x);
    printf("y is %d\n",y);
    printf("z is %d\n",z);

}
