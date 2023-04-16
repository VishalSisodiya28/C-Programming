#include <stdio.h>

int main()
{

    char str[20];

    printf("Enter a string : ");
    fgets(str, 20, stdin);

    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }

    len -= 1; // beacuse len counting the null char also .

    printf("The length of string is : %d", len);
    return 0;
}