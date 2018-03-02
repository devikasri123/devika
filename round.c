#include<stdio.h>
const float add = 0.5;
int main(void)
{
float x;
printf("Please enter a value to be rounded: ");
scanf("%f", &x);
x = x + add;
x= (int)x;
printf("The rounded value is %.2f", x);
return 0;
}
