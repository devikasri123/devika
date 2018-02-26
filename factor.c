#include <stdio.h>
int main()
{
    int number, a;

    printf("Enter a positive integer: ");
    scanf("%d",&number);

    printf("Factors of %d are: ", number);
    for(a=1; a <= number; ++a)
    {
        if (number%a == 0)
        
        
    
            printf("%d ",a);
    }
        
    

    
}
