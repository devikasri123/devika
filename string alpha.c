#include <stdio.h>
#define MAX_SIZE 100 

int main()
{
    char str[MAX_SIZE];
    char * s = str;
    int alphabets, digits;

    alphabets = digits =  0;


    printf("Enter any string : ");
    gets(str);

    while(*s)
    {
        if((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
            alphabets++;
        else if(*s>='0' && *s<='9')
            digits++;
        

        s++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
   

    return 0;
}
