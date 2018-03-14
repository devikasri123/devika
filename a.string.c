#include <stdio.h>
#include <string.h>
int main()
{
char name[50];
 int i=0;
 printf(“Enter the string :/n”);
gets(name);
name[1]=toupper(name[1]);
while(name[i]!=’\0’)
 {
 if(name[i]== ‘ ‘)
name[i+1]=toupper(name[i+1]);
i=i+1;
}
puts(name);
}
