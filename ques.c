#include<stdio.h>
void main()
{
char s[15],ch='0';
int len,count,i,j;
printf("Enter a string");
gets(s);
len=strlen(s);

for(i=0;i<10;i++){
  count=0;
    for(j=0;j<len;j++){
        if(s[j]==ch)
        count++;
    }
    printf("%d",count);
    ch++;

}


}
   