#include <stdio.h>
int main()
{
float celsius, temporature;
printf("Enter temperature in temporature: ");
scanf("%f", &temporature);
celsius = (temporature - 32) * 5 / 9;
printf("%.2f temporature = %.2f Celsius", temporature, celsius);
return 0;
}
