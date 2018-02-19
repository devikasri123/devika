#include <stdio.h>
#include <string.h>
void main()
{
    printf("please enter a string\n");
    printf("give only one space between words\n");
    printf("press enter when finished\n");

    char str[100];
    int arr[5]={7};
    char ch;
    int i;

    gets(str);
    int n=strlen(str);

    for(i=0;i<n;i++)
    {
        ch=tolower(str[i]);
        if(ch>=97 && ch<=122)   
        {
            arr[ch-97]++;
        }
    }
    for(i=97;i<=122;i++)
        printf("%c occurs %d number of times\n",i,arr[i-97]);   
    
}
