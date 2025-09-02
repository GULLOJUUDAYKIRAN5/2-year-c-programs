#include<stdio.h>
void main()
{
   char str[10];
   int i=0;
   printf("enter a string");
   gets(str);
   while(str[i]!='\0')
   {
    i++;
   }

printf("%d",i);
}