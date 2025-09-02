//write a programe that reads n strings from the user and prints in the sorted ordef
#include<stdio.h>
#include<string.h>
void partion(char x[][50],int lb,int ub,int *j)
{
    int down,up;
    char p[100];
    char t[100];
    strcpy(p,x[lb]);
    down=lb;
    up=ub;
    while(down < up)
    {
        while((strcmp(x[down],p)<= 0)&&(down < up))
        {
            down++;
        }
        while(strcmp(x[up],p)>0)
        {
            up--;
        }
        if(down < up)
        {
            strcpy(t,x[down]);
            strcpy(x[down],x[up]);
            strcpy(x[up],t);
        }
    }
    strcpy(x[lb],x[up]);
    strcpy(x[up],p);
    *j=up;

}

void quicksort(char x[][50],int lb,int ub)
{
    int j;
    if(lb >= ub)
    {
        return;
    }
    partion(x,lb,ub,&j);
    quicksort(x,lb,j-1);
    quicksort(x,j+1,ub);
}
int main()
{
    int i,n,lb,ub;
    printf("enter the value of n:");
    scanf("%d",&n);
    char a[n][50];
    printf("enter the %d strings:",n);
    for(i=0;i<n;i++)
    scanf("%s",a[i]);
    lb=0;
    ub=n-1;
    quicksort(a,lb,ub);
    for(i=0;i<n;i++)
    printf("%s\t",a[i]);
}
