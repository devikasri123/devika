#include<stdio.h>
void  binary(int x)
{
int r[100]={0},i=0;
while(x>0)
{
r[i]=x%2;
x=x/2;
i++;
}
for(;i>=0;i--)
{
printf("%d",r[i]);
}
}
int main()
{int x,bx;
printf("Enter the number :");
scanf("%d",&x);
printf("Binary representation of no : %d is ",x);
binary(x);
return 0;
}
 

