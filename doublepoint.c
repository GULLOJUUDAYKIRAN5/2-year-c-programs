#include<stdio.h>
void main()
{
    int a=10;
    int*p=&a;
    int**q=&p;
    int***r=&q;
       
   ***r=20;
   *p=15;
    printf("%d",*p);
    printf("%d%d%d",a,**q,***r);
    if(**r==p)
    printf("%d",r);
}