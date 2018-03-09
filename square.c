#include <stdio.h>
int main()
{
float length, width, area;
printf("Enter length of rectangle: \n");
scanf("%f", &length);
printf("Enter width of rectangle:\n ");
scanf("%d", &width);
area = length * width;
printf("Area of rectangle = %f sq. units ", area);
return 0;
	
}
