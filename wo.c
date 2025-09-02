#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    sum(a,b);
}
void sum(int a,int b)
{
    int k;
    k=a+b;
    printf("%d",k);

}