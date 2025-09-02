#include<stdio.h>
struct store{
    int a;
    struct dress
    {
        char col[10];
        int size;
    }s1;
    struct books
    {
        char author[10];
        int age;
        int pages;
    }s2;
}s;
void main()
{
    int i;
    printf("enter dress col and size\n");
    scanf("%s%d",s.s1.col,&s.s1.size);
    printf("%s%d\n",s.s1.col,s.s1.size);
     printf("enter author name age and pages\n");
    scanf("%s%d%d",s.s2.author,&s.s2.age,&s.s2.pages);
    printf("%s%d%d",s.s2.author,s.s2.age,s.s2.pages);

}