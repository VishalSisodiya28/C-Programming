// Write a program in C to copy one string to another string.

#include <stdio.h>

int main()
{

    char str1[] = "Vishal Sisodiya";
    int n = sizeof(str1);

    char str2[n];

    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];

        i++;
    }
    str2[i] = '\0';

    printf("%s", str2);

    return 0;
}