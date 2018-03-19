#include <stdio.h>
int findK(int n,int k)
{
int half = (n+1)/2;
if (k>n)
return(2*(k-half));
else
return(2*k-1);
}
int main()
{
long n=10,k=3;
printf("findK(n,k)");
return 0;
}
