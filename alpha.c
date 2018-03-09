#include<stdio.h> 
int main()
{ 
char ch; 
for(;;)
{ 
ch = getc(stdin); 
if(ch == '.') 
break; 
if(isalnum(ch)) printf("%c is alphanumeric\n", ch); 
} 
