#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a,b,x;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    x=sum(a,b);
    printf("%d",x);
}
int sum(int a,int b)
{
   
    
    if(b>=a)
    {
        return a+sum(a+1,b);
    }
    else
    return 0;
    

}