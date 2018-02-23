#include<stdio.h>

int main()
{
int i,words=1;
char str[100];

printf(“Enter the  string:”);
gets(str);
for(i=0;str[i]!=’’;++i)
if(str[i]==’ ‘)
words++;

printf(“No. of words are %d”,words);

}
