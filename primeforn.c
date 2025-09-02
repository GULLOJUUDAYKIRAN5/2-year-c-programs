#include<stdio.h>
void main()
{
    int n;
    printf("n value");
scanf("%d",&n);
     prime(n);
}
void prime(int n)
{
int i,j,count;

for(i=1;i<=n;i++)
{
    count=0;
    for(j=1;j<=i;j++)
    {
        if(i%j==0)
        count++;
        }
    if(count==2)
    printf ("%d",i);

}
}