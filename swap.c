#include <stdio.h>

int main()
{
    int num2, num3;

    printf("Enter any two numbers: ");
    scanf("%d%d", &num2, &num3);

    printf("Original value of num2 = %d\n", num2);
    printf("Original value of num3 = %d\n", num3);

    num2 ^= num3;
    num3 ^= num2;
    num2 ^= num3;

    printf("Num1 after swapping = %d\n", num2);
    printf("Num2 after swapping = %d\n", num3);

    return 0;
}
