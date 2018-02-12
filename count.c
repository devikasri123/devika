#include <stdio.h>

int main()
{

   char ch;
   unsigned int long  charcount;
   int u;
   
   charcount=6;


   while((ch=getc(stdin))!=EOF)
   {


       if (ch !='\n') {++charcount;}
       

     }
   if(charcount>5)
   {
   
   
printf("enter the charecter");
   printf( "%lu \n", charcount);

   return 0;

}
}
