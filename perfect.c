#include <stdio.h>
int main()
{
int num;
int aVar;
float bVar;
printf("Enter an integer number: ");
scanf("%d",&num);
bVar=sqrt((double)num);
aVar=bVar;
if(aVar==bVar)
printf("%d is a perfect square.",num);
else
printf("%d is not a perfect square.",num);
return 0;
}
