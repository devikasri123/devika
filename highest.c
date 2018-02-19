#include <stdio.h>
 
int main()
{
        
        int array[50], size, a, largest;
 
        printf("\n Enter the size of the array: ");
	scanf("%d", &size);
 
        printf("\n Enter %d elements of  the array: ", size);
 
        for (a= 0; a < size; a++)
         scanf("%d", &array[a]);
 
        largest = array[0];
 
        for (a = 1; a < size; a++) 
        {
	if (largest < array[a])
	largest = array[a];
	}
 
        printf("\n largest element present in the given array is : %d", largest);
 
        return 0;
}
 
