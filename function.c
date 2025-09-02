#include<stdio.h>
void main()
{
    int n,p;
    printf("enter n vlaue");
    scanf("%d",&n);
   p= sum(n);
   printf("%d",p);
    
}
int sum(int n)
{
int i,sum=0;
for(i=0;i<=n;i++)
{
if(i%3==0)
sum=sum+i;
}
return sum;
}