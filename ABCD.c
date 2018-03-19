#include<stdio.h>
int sumofNterm(int a, int d, int b, int r, int n)
{      
int sum = 0;
for (int i = 1; i <= n ; i++)    
sum += ((a + (i -1) * d) * (b * pow(r, i - 1)));  
return sum;
}
void main()
{
int a = 1, d = 1, b = 2, r = 2, n = 3;
printf("sumofNterm(a, d, b, r, n):");
} 
