#include<stdio.h>
void main()
{
    int a[10],i,max,min,n;
    printf("enter array size");
    scanf("%d",&n);
   
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=1;i<=n;i++)
    {
        printf("%d\n",a[i]);
        
    }
    max=min=0;
    for(i=1;i<=n;i++)
    {
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }
    printf("%d max is %d min is",max,min);
    for(i=1;i<=n;i++)
    {  


        printf("%d\n",a[i]+max);
        
    }
    
   for(i=1;i<=n;i++)
    {  


        printf("%d\n",a[i]*max);
        
    }
     for(i=1;i<=n;i++)
    {  


        printf("%d\n",(a[i]+max)*max);
        
    }
    
}