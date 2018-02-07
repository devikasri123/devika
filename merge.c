#include<stdio.h>
int main() 
{ 
   int i;

   printf("List before sorting\n");
   
   for(i=0; i<=max; i++)
      printf("%d ", a[i]);

   sort(0, max);

   printf("\nList after sorting\n");
   
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);
}
