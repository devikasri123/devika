#include<stdio.h>
int main()    
{
   int n,a,b,flag=0,out;

   

   printf("enter the num\n");

   scanf("%d",&n);

   for(a=n+1;a<=100;a++)
   {

      flag=0;

      for(b=2;b<a;b++)
      {
         if(a%b==0)
         {
            flag=1;
            break;
         }
      }

      if(flag==0)
      {
         printf("next prime is:%d",a);
         break;
      }
   }

   
}
