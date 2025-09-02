#include<stdio.h>
void main()
{
    char str[9],str1[9];
    int i=0,j=0;
    printf("enter a string");
    gets(str);
    printf("enter 2nd string");
    gets(str1);
    while(str[i]!='\0')
    {
        i++;
    }
    while(str1[j]!='\0')
    {
        
        str[i]=str1[j];
        i++;j++;
    }
  
    
    puts(str);

}