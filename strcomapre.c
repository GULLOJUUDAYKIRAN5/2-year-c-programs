#include<stdio.h>
void main()
{
    char str[10],s[10];
    int i=0,j=0;
    printf("enter a string");
    gets(str);
    printf("enter 2nd string");
    gets(s);
    while(str[i]!='\0')
    {
        if(str[i]==s[j])
        {
        i++;j++;
        }
        else
        break;
    }
   if(str[i]=='\0'&&s[j]=='\0')
   printf("equal");
   else
   printf("not equal");
}