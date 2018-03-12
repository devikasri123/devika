#include <stdio.h>
int main()
{
 int arr[100], len,a,n;
 printf("Enter the size of array");
 scanf("%d", &len);
 printf("\n Enter the array elements");
 for (a= 0; a< len; a++) 
 {
 scanf("%d", &arr[a]);
 printf("\n Enter Which kth Number You want");
 scanf("%d", &n);
 printf("\n The %d th kth number is: %d", n, arr[n - 1]);
 return 0;
 }
}
