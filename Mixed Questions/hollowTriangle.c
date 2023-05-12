#include <stdio.h>

int main()
{

    int n = 6;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
            if (i == n - 1)
                printf("*");
        }
        printf("*");

        for (int j = 0; j < 2 * i - 1; j++)
        {

            if (i == n - 1)
                printf("*");

            else
                printf(" ");
        }

        if (i != 0)
            printf("*");

                printf("\n");
    }

    return 0;
}