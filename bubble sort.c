#include<stdio.h>
void main()
{
    int a[10],i,n;
    printf("enter size of an array");
    scanf("%d",&n);
    printf("enter array eles");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    bubble(a,n);
}
void bubble(int a[],int n)
{
    int i,t,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}