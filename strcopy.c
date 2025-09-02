#include<stdio.h>
void main()
{
    char str1[10],str2[10];
    int i=0,j=0;
    printf("enter a string");
    gets(str1);
    printf("enter second");
    gets(str2);
    while(str1[i]!='\0')
    {
        str2[j]=str1[i];
        i++;j++;
        
    }
    
    puts(str2);
}