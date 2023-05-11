#include <stdio.h>

int main()
{

    int n;

    printf("Enter number rows : ");
    scanf("%d", &n);

    // upper part

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            if (j <= i)
                printf("*");

            else
            {

                printf(" ");
            }
        }

        for (int j = 0; j < n; j++)
        {

            if (j < n - i - 1)
                printf(" ");
            else
            {

                printf("*");
            }
        }

        printf("\n");
    }

    // Lower part

    for (int i = n - 1; i >= 0; i--)
    {

        for (int j = 0; j < n; j++)
        {

            if (j <= i)
                printf("*");

            else
            {

                printf(" ");
            }
        }

        for (int j = 0; j < n; j++)
        {

            if (j < n - i - 1)
                printf(" ");
            else
            {

                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}