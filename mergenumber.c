#include <stdio.h>
void merge(int [], int, int [], int, int []);
 int main()
{
int a[100],b[100],m,n,c,sorted[200];
printf("Input number of elements in first array\n");
scanf("%d", &m);
printf("Input %d integers\n", m);
for (c = 0;c<m;c++) 
{
scanf("%d",&a[c]);
}
printf("Input number of elements in second array\n");
scanf("%d", &n);
printf("Input %d integers\n",n);
for (c = 0; c<n; c++) 
{
scanf("%d",&b[c]);
}
merge(a,m,b,n,sorted);
printf("Sorted array:\n");
for (c=0;c<m+n;c++) 
{
printf("%d\n",sorted[c]);
}

}
 
