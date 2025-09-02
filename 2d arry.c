#include<stdio.h>
void main()
{
    int a[10][10],n,i,j,r;
    printf("enter rows and cols element");
    scanf("%d%d",&n,&r);
    printf("enter %d array elements",n*r);
    for(i=0;i<n;i++)
    for(j=0;j<r;j++)
    scanf("%d",&a[i][j]);
    printf("elements:\n");
    for(i=0;i<n;i++)
    {
        
        {
        for(j=0;j<r;j++)
        if(i>=j)
        {
            if(a[i][j]%2==0)
            {

        printf("%d\t",a[i][j]);
            }
        }
         printf("\n");
    }
}
}