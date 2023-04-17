#include <stdio.h>
#include <string.h>

int main()
{

    char str[20];

    printf("Enter a string : ");
    gets(str);

    int i = 0;

    while (str[i] != '\0')
    {
        printf("%c ", str[i]);

        i++;
    }

    return 0;
}