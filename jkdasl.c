#include<stdio.h>
void main()
{
    int a[10][10],i,j,r,c;
    printf("enter rows and cols");
    scanf("%d%d",&r,&c);
    printf("%d enter r and cols",r*c);
    for(i=1;i<=r;i++)
    {
    for(j=1;j<=c;j++)
    
        scanf("%d",&a[i][j]);
    }
    
    for(i=1;i<=r;i++)
    {
    for(j=1;j<=c;j++)
    {
 printf("%d\t",a[i][j]);
    printf("\n");
    }
    }
     printf("transpose of given matris is");
    for(i=1;i<=r;i++)
    {
    for(j=1;j<=c;j++)
    {
    printf("%d\t",a[j][i]);
    printf("\n");
    }
    }
    
}