#include<stdio.h>


int main()
{
 int n,m,x,i;
 
 
 printf("\nEnter a number\n");
 scanf("%d",&n);
 i=n;

 while(n>0)    
 {x=n%10;    
  n=n/10;   

  printf(" \n The %d digit is ",i);
  i--;
  }

  
 }
