#include<stdio.h>
void main()
{
    int n,p;
    printf("enter numberof values");
    scanf("%d",&n);
    factorial(n);
   fac(n);
    
}
void factorial(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
    fact=fact*i;
    }
    printf("%d",fact);
    
}
void fac(int n)
{
    int static a=1;
    if(n>0)
    {
    a=a*n;
    fac(n-1);
    }
   else
   printf("%d",a);
}