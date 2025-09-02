#include<stdio.h>
int main()
{
    FILE *p,*q;
    char ch;
    p=fopen("d.txt","w");
    do
    { 
        ch=getchar();
      putc(ch,p);

    }while(ch!=EOF);
    fclose(p);
    
    q=fopen("d.txt","r");
    char c;
    do
    { 
       c=getc(p);
        printf("%c",c);
      

    }while(c!=EOF);
    fclose(q);
    
    return(0);
}