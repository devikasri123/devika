#include <stdio.h>
 
void swap(int *xa, int *yb)
{
    int temp = *xa;
    *xa = *yb;
    *yb = temp;
}
 
int main()
{
    int a, b;
    printf("Enter Value of a");
    scanf("%d", &a);
    printf("\nEnter Value of b ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("\nAfter Swapping: a = %d, b = %d", a, b);
    return 0;
}
