#include<stdio.h>
int main()
{
    int a[10],i,n,key,p;
    printf("enter n value\n");
    scanf("%d",&n);
    printf("enter array ele");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter key values");
    scanf("%d",&key);
    search(a,key,n);
}
    
int search(int a[],int key,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("%d",i);
            break;
        }
        
    }
    if(i=n-1)
    printf("-1");
    
}