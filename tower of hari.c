#include<stdio.h>
void main()
{
    int n;
    
    printf("enter nubmer of towers");
    scanf("%d",&n);
    tower(n,'a','b','c');

 
}
void tower(int n,char s,char p,char d)
{
    if(n==1)
    {
        printf("%cto%c\n",s,d);

    }
    else{
        tower(n-1,'a','c','b');
        printf("%cto%c\n",s,d);
        tower(n-1,'b','a','c');
    }

}
 