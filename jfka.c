#include<stdio.h>
void main()
{
    int n;
    printf("enter n value");
    scanf("%d",&n);
    prime(n);
    armstrong(n);
}
void prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
    if(n%i==0)
    count++;
    }
    if(count==2)
    printf("is prime");
    else
    printf("nor prime");

    
}
void armstrong(int n)
{
    int temp,sum=0,rem;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=(rem*rem*rem)+sum;
        n=n/10;
    }
    if(temp==sum)
    printf("is arm");
    else
    printf("not arm");
}