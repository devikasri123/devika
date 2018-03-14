    #include <stdio.h>
    int main() {
    int a[10];
    int b;
    int greatest;
    printf("Enter ten values:");
    for (b = 0;b< 10;b++) 
    {
    scanf("%d", &a[b]);
    }
    greatest = a[0];
    for (b= 0;b<10;b++) 
    {
    if (a[b] > greatest) 
    {
    greatest = a[b];
    }
    }
    printf("Greatest of ten numbers is %d", greatest);
    return 0;
     }
