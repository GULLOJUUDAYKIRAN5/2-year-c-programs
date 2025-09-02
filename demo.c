#include<stdio.h>
#include<string.h>
void main()
{
    char a[10][10];
    int n,i;
    printf("enter n value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%s",a[i]);
    sort(a,n);

}
void sort(char a[10][10],int n)
{
    int i,j;
    char t[10];
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(strcmp(a[j],a[j+1])>0)
            {
               strcpy(t,a[j]);
               strcpy(a[j],a[j+1]);
               strcpy(a[j+1],t);
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%s",a[i]);
}