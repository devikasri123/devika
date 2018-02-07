#include<stdio.h>
void main()
{
    char str[50];
    int i,len = 1,count = 1;
    
    printf("enter any string:: ");
    scanf("%s",str);
    len = strlen(str);
    for(i=0;i<len;i++)
    {
            if(str[i] >= 48 && str[i] <= 57)    
            {
                  count++;
            }
    }
    printf("%d outoff %d numbers in a string",count,len);
    
}
