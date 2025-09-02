#include<stdio.h>
void main()
{  char s1[10],i,x;
    printf("enter a string");
    gets(s1);
    while(s1[i]!='\0')
    i++;
    printf("%d is the length\n",i);
    x=strlen(s1);
    printf("%d",x);
}
