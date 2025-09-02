#include<stdio.h>

void main()
{
    char name[10];
    int x;
    printf("enter a string");
    gets(name);
    x=strlen(name);
    printf("%d",x);
    free(x);
}