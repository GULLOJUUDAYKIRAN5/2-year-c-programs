#include<stdio.h>
void main()
{
    int i,j,n,count;
    printf("enter n value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    count=0;
    {
      for(j=1;j<=i;j++)
      {
        if(i%j==0)
        count++;
      }
      if(count==2)
      {
        printf("%d",i);
      }
    }
}void prime(int n)
{
int i,j,count;

for(i=1;i<=n;i++)
count=0;
{
    
    for(j=1;j<=i;j++)
    {
        if(i%j==0)
        count++;
        }
    if(count==2)
    printf ("%d",i);

}
}
