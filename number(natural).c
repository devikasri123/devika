#include <stdio.h>
int main()
{
int n, j,sum = 0;
printf("Enter a positive integer: ");
scanf("%d",&n);
for(j=1;j<=n;++j)
{
sum+=j;   
}
printf("Sum = %d",sum);
return 0;
}
