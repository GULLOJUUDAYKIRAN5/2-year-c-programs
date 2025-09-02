#include<stdio.h>
void main()
{
    int a[10],i,n;
    int*p;
    
    printf("enter arry elmetns");
    scanf("%d",&n);
  printf(" enter %d arry elments",n);
  
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a;

   // printf("%d%d",*p++,*p++);
     for(i=0;i<=n;i++)

     {
    printf("%d",*p);
    p++;
     }
}