#include<stdio.h>
int main()
{
char str[20], ch;
int count = 0, n;
printf("\nEnter a string : ");
scanf("%s", &str);
printf("\nEnter the character to be searched : ");
scanf("%c", &ch);
for (n = 0; str[n] != '\0'; n++) 
{
if (str[n] == ch)
count++;
}
if (count == 0)
printf("\nCharacter '%c'is not present", ch);
else
printf("\nOccurence of character '%c' : %d", ch, count);
return (0);
}
