// Write a program in C to find maximum occurring character in a string

#include <stdio.h>
#include <stdlib.h>

int main()
{

    char str[] = "Vishal";

    int n = sizeof(str);
    int *ptr = (int *)calloc(256, sizeof(int));

    int i = 0;

    while (str[i] != '\0')
    {

        ptr[str[i]]++;

        i++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (ptr[i] != 0)
        {
            printf(" %c -> %d times\n", i, ptr[i]);
        }
    }

    return 0;
}