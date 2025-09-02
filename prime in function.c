#include<stdio.h>
void main()
{
    int n,k;
    printf("enter n vlaue");
    scanf("%d",&n);
    k=prime(n);
    if(k==2)
    printf("given no is prime");
        else
        printf("not prime");
    
}
int prime(int n)
{
int i,count=0;
for(i=0;i<=n;i++)
{
if(n%i==0)
count++;
}
if(count==2)
return count;
}
