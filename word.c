#include <stdio.h>
 
int main(int argc, char *argv[])
{
    int a = 0;
 
    if (argc == 1)
    {
        printf("\n No sentence given on command line");
        
    }
    else
    {
        printf("\nThe words in the sentence are:");


        for (a = 1;a < argc;a++)
        {
            printf("\n%s", argv[a]);
         }
        printf("\n\nTotal number of words:");
        printf(" %d", argc-1);
    }
}
