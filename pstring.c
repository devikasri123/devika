#include <stdio.h>
#define MAX_SIZE 100 

int main()
{
    char str[MAX_SIZE];
    int p, words;

    printf("Enter any string: ");

    p = 0;
    words = 1;

    while(str[p] != '\0')
    {
        if(str[p]==' ' || str[p]=='\n' || str[p]=='\t')
        {
            words++;
        }

        p++;
    }

    printf("Total number of words = %d", words);

    return 0;
}
