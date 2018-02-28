#include <stdio.h>
 
int main()
{
 int num;
 int tempNum;
 printf("Enter an integer number: ");
 scanf("%d",&num);
 tempNum=num;
 while(tempNum!=1)
 {
 if(tempNum%2!=0)
 {
 
 
 
 tempNum=tempNum/2;
 }
  
    
        printf("%d is a number that is the power of 2.",num);
    
        printf("%d is not the power of 2.",num);
      
    return 0;
}
}
