#include<stdio.h>
void main()
{
    int a[10],n,i,pos;
    printf("enter size of an array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter what pos to be del");
    scanf("%d",&pos);
   
    for(i=pos-1;i<n-1;i++)
    a[i]=a[i+1]; 
    for(i=0;i<n-1;i++)
    printf("%d",a[i]);
}