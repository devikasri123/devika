#include <stdio.h>
#define MAXSIZE 10
 int main()

{
    int array[MAXSIZE];
    int a, b, num, temp;
 
    printf("Enter the value of num \n");
    scanf("%d", &num);
    printf("Enter the elements one by one \n");
    for (a = 0; a < num; a++)
    {
        scanf("%d", &array[a]);
    }
    printf("Input array is \n");
    for (a = 0; a < num; a++)
    {
        printf("%d\n", array[a]);
    }
    for (a= 0; a < num; a++)
    {
        for (b = 0; b < (num - a - 1); b++)
        {
            if (array[b] > array[b + 1])
            {
                temp = array[b];
                array[b] = array[b + 1];
                array[b + 1] = temp;
            }
        }
    }
    printf("Sorted array is...\n");
    for (a = 0; a< num; a++)
    {
        printf("%d\n", array[a]);
    }
}
