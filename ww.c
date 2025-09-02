#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
   c=sum(a,b);
   printf("%d",c);
}
int sum(int e,int f)
{
    int k;
    k=e+f;
    return k;

}
