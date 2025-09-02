#include<stdio.h>
void main()
{
    int i,a[10],n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sum(a,n);

}
void sum(int a[],int n)
{
    int static s=0;
    if(n!=0)
    {
    s=s+a[n-1];
    sum(a,n-1);
    }
    else
    printf("%d",s);


}