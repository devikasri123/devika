#include<stdio.h>
int main()
{
        long int sum=0,i,n;
        
        printf("\n Please Give The Value of N:  ");
        scanf("%ld",&n);
        for(i=1;i<=n;i++)
        {
            printf("\n 5 * %ld = %ld",i,5*i);
        }
}
        