// Write a program in C to print a string in reverse

#include <stdio.h>
#include <string.h>

int main()
{

    char str[20];

    printf("Enter a string : ");
    gets(str);

    int n = 0;

    while (str[n] != '\0')
    {

        n++;
    }

    n--;

    int i = n;

    printf("Reversed string is : ");

    while (i >= 0)
    {
        printf("%c", str[i]);

        i--;
    }

    return 0;
}