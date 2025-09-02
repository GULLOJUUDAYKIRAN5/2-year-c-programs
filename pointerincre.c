#include<stdio.h>
void main()
{
    int age=22;
    int _age=23;
    int*ptr=&age;
    int*_ptr=&_age;
    char name[10];
    char*ud=&name;
    printf("%d%d\n",ptr,_ptr);
    printf("%d\n",ptr-_ptr);
    printf("%d\n",ptr==_ptr);
    printf("enter a character");
    gets(name);
    printf("%u\n",&ud);
    puts(name);
    

}