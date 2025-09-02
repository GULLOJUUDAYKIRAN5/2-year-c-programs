#include<stdio.h>
int isprime( int n);
int main()
{
    int number,i,n;
    printf("enter n vlaue");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     number=isprime(i);
    if(number==1)
     printf("%d",i);
        }
    return 0;
}
int isprime(int num)
{
int count=0,j;
for(j=1;j<=num;j++)
{
    if(num%j==0)
    count++;
}
if(count==2)
return 1;
else
return 0;
}