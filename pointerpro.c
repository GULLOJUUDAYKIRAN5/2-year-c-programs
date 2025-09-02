#include<stdio.h>
void main()
{
    int a[]={1,2,3,4,5};
    int*p,*q;
    p=a;
    q=&a[0];
    printf("%d\n",*q);
    printf("%d%d%d\n",*p,(*p)++,*p);

        
        
        
        
    printf("%d",*p);

}