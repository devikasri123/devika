#include <stdio.h>              
int main()                        
int a[10] = { 3,9,7,6,5,1,2,8,10,4 };          
int n = 10;                                     
printf("\n\nArray Data : ");                    
{
printf(" %d ", a[i]);                   
}
for (int i = 0; i < n; i++)                     
{
for (int j = 0; j < n; j++)             
{
if (a[j] > a[i])                
{
int tmp = a[i];         
a[i] = a[j];           
a[j] = tmp;            
}  
}
}
printf("\n\nAscending : ");                     
for (int i = 0; i < n; i++)                     
{
printf(" %d ", a[i]);
}
for (int i = 0; i < n; i++)                     
for (int j = 0; j < n; j++)            
{
if (a[j] < a[i])               
{
int tmp = a[i];        
a[i] = a[j];            
a[j] = tmp;            
}
}
}

