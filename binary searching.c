#include<stdio.h>
void main()
{
    int a[10],i=0,n,mid,key,first,last;
    printf("enter size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter key value\n");
    scanf("%d",&key);
    first=i;
    last=n-1;
   
    while(1)
    {     int f=0;
         mid=(first+last)/2;
        if(a[mid]==key)
        {
            printf("%d",mid);
            f=1;
            break;
        }
        else
        {
            if(a[mid]<key)
            {
                first=a[mid+1];
                last=n-1;
            }
            else
            {     
                first=0;
                last=a[mid-1];

            }
        }
        
    }

}