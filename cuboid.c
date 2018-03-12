#include <stdio.h>
#include <math.h>
int main()
{
float width, len, height;
float surfacearea, volume, space_diagonal;
printf("Enter value of width, len & height of the cuboids:\n");
scanf("%f%f%f", &width, &len, &height);
surfacearea = 2 *(width * len + len * height +height * width);
volume = width * len * height;
space_diagonal = sqrt(width * width + len * len+height * height);
printf("Surface area of cuboids is: %.3f", surfacearea);
printf("\n Volume of cuboids is : %.3f", volume);
printf("\n Space diagonal of cuboids is : %.3f", space_diagonal);
return 0;
}
