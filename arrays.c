#include<stdio.h>
void main()
{
int a[10],i,n;
printf("enter n value");
scanf("%d",&n);
printf("enter arry elements");

for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)
{
if(a[i]%2==0)
printf("%d",a[i]);
}

}

