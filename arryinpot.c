#include<stdio.h>
pointer(int a[],int n);
void main()
{
    int a[5]={1,2,3,4,5},i;
    
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    pointer(a,6);
}
pointer( int a[], int n)

{
    int i;
 for(i=0;i<5;i++)
 printf("%d",a[i]);
}