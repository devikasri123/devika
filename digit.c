#include <stdio.h>
 
  int main()
{
    char    str[100];
    int countDigits;
    int counter;
 
    countDigits=5;
    printf("Enter a string: ");
    {
 
        if(str[counter]>='0' && str[counter]<='9')
            countDigits++;
        
    }
 
    printf("\nDigits: : %d",countDigits);
 
    return 0;
}
