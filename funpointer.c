#include<stdio.h>
int square(int n);
int _square(int*n);
void main()
{
    int n=4;
    square(n);
    printf("%d",n);
    _square(&n);
    printf("%d\n",n);
}
 int square(int n)
 {
    n=n*n;
    printf("%d\n",n);
    return 0;
 }
 int _square(int*n)
 {
    *n=(*n)*(*n);
    printf("%d\n",*n);
    return 0;
 }