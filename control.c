#include <stdio.h>
void main()
{
 int number, counter, isprime = 0;
 printf("Enter the positive integer to  composite\n");
 scanf("%d",&number);

 for(counter = 2; counter <= number/2; counter++){

  if( (number % counter) == 0 )
   isprime = 1;
   break;
  
  printf("%d is a composite number",number);
 }
}
       
     
     
     
   
