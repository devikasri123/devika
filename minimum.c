#include <stdio.h>
 
int main() 
{
    int array[100], minimum, size, p, location = 1;
 
    printf("Enter the number of elements in array\n");
    scanf("%d",&size);
 
    printf("Enter %d integers\n", size);
 
    for ( p = 0 ; p< size ; p++ )
        scanf("%d", &array[p]);
 
    minimum = array[0];
 
    for ( p= 1 ; p < size ; p++ ) 
    {
        if ( array[p] < minimum ) 
        {
           minimum = array[p];
           location = p+1;
        }
    } 
 
    printf("Minimum element is present at location %d and it's value is %d.\n", location, minimum);
    return 0;
}
