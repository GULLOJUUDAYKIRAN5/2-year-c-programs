
#include<stdio.h>
void main()
{
    int a=10,b=5;
    int*p,*q;
    p=&a;
    q=&b;
    *p=20;
    
    printf("%d%d\n",*p,*q);


    printf("%d",p);
    printf("%d",&a);
}