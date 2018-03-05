#include <stdio.h>
void main()
{
int i, no1, no2, count = 0, sum = 0;
printf("Enter the value of no1 and no2 \n");
scanf("%d %d", &no, &no2);
printf("Integers divisible by 5 are \n");
for (i = no1; i < no2; i++)
{
if (i % 10== 0)
{
printf("%3d,", i);
count++;
sum = sum + i;
}
}
printf("\n Number of integers divisible by 5 between %d and %d =%d\n", no1, no2, count);
printf("Sum of all integers that are divisible by 5 = %d\n", sum);
}
