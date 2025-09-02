#include<stdio.h>
void main()
{
    copy();
    concat();
    compare();
    rever();
}
void copy()
{
char aar1[13],arr2[10];
    printf("enter two string");
    gets(aar1);
     strcpy(arr2,aar1);
     printf("%s\n",aar1);
      printf("%s",arr2);
}
void concat()
{
    char x[10],y[10];
    printf("enter two strings");
    gets(x);
    gets(y);
    strcat(y,x);
    printf("%s",x);
    printf("%s",y);
}
void compare()
{
    char a[10],b[10];
    int g;
    printf("enter two strings");
    gets(a);
    gets(b);
    g=strcmp(a,b);
    if(g==0)
    {
        printf("both strings are equal");
    }
    else
    printf("not equal");

}
void rever()
{
    char ab[10];
    printf("enter a string");
    gets(ab);
    strrev(ab);
    printf("%s",ab);
}