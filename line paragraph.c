#include <stdio.h>
#include <string.h>
void main()
{
   char str[100];
   int b = 0, l = 0, f = 1;
   puts("Enter any string\n");
   for(b = 0; str[b] !='\0'; b++)
   {
      l = l + 1;
   }
   printf("The number of characters in the string are %d\n", l);
   for(b = 0; b <= l-1; b++)
   {
      if(str[b] == ' ')
      {
    f = f + 1;
      }
   }
   printf("The number of words in the string are %d", f);
}
