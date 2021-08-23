#include<stdio.h>

int main()
{
    char str1[] = "Bangladesh";
    char str2[100];
    int length;
    for(int i = 0; i < strlen(str1); i++)
    {
        str2[i] = str1[i];
    }
    printf("2nd string is: ");
    for(int i = 0; i < strlen(str2); i++)
    {
        printf("%c", str2[i]);
    }
    length = strlen(str1);
    printf("\nLength is %d", length);
}
