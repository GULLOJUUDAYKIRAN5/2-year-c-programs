#include<stdio.h>
#include<string.h>
void main()
{
    int a[5][5],i,j,r,c,sum=0;
    printf("enter rows and cols");
    scanf("%d%d",&r,&c);
    printf("enter %darray elements",r*c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
          scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
            
          printf("%d\t",a[i][j]);
          sum=sum+a[i][j];
            }
        }
        printf("\n");
    }
    
 printf("%d",sum);

    
    
   

}