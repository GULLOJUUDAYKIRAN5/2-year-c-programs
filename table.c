#include<stdio.h>
void main()
{
    int n,m,i,j;
    printf("enter st and end values");
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        for(j=1;j<=10;j++)
        printf("%d*%d=%d\n",i,j,i*j);
    }
      
}