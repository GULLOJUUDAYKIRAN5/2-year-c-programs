#include<stdio.h>
void main(){
   char a[10],b[10];
   int i=0,x;
   printf("enter a string");
   gets(a);
   x=strlen(a);
   while(a[i]!='\0')
   {
     i++;
   }
   while(i!=-1)
   {
      printf("%c",a[i]);
      i--;
   }
   

   

}