#include<stdio.h>
int main()
{
    int i=1,n=100;
    int present, previous=0;
    while(i < 100)
    {
        present = i;
        printf("%d ", i);
        i = present + previous;
        previous = present;
    }
}
