#include <stdio.h>
 

void swap(int*, int *);
 
void main()
{
    int num4, num5;
    printf("\nEnter two numbers:");
    scanf("%d %d", &num4, &num5);
    printf("\nThe numbers before swapping are Number4= %d Number5= %d", num4, num5);
    swap(&num4, &num5);       
    printf("\nThe numbers after swapping are Number4= %d Number5 = %d", num4, num5);
}
 
void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}
