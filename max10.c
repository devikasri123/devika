#include <stdio.h>
  int main()
  {
    int a[10];
    int x;
    int greatest;
    printf("Enter ten values:\n");
    for (x = 0; x < 10; x++)
    {
    scanf("%d", &a[x]);
    }
    greatest = a[0];
    for (x = 0; x< 10; x++)
    {
if (a[x] > greatest)
{
greatest = a[x];
    }
    }
    printf("Greatest of ten numbers is %d", greatest);
    return 0;
  }
