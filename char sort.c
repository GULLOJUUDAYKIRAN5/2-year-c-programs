#include<stdio.h>
#include<string.h>
void bubble(char a[][20],int n);
void main()
{
    char a[10][20];
    int i,n;
    printf("enter n value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%s",a[i]);
    for(i=0;i<n;i++)
    printf("%s\n",a[i]);
    bubble(a,n);
}
void bubble(char a[][20],int n)
{
    int i,j;
    char temp[10];
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-1-i);j++)
        {
            if(strcmp(a[j],a[j+1])>0)
            {
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%s",a[i]);

}