#include<stdio.h>
void main()
{
    char s[10][10],m[10];
    int i,j,n,p;
    printf("enter the numb names");
    scanf("%d",&n);
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        scanf("%s",&s[i][j]);
    }
    printf("enter a char");
    scanf("%s",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            if(s[i][j]==m)
            
            printf("%s are equal",m);
        }
    }



}