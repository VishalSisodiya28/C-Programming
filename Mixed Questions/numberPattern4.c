#include <stdio.h>

int main()
{

    int n = 5;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {

            printf(" ");
        }

        for (int j = 1; j <= 2 * i + 1; j++)
        {
            if (i != n - 1)
            {

                if (j == 1 || j == 2 * i + 1)

                    printf("%d", j);

                else
                    printf(" ");
            }

            else
            {

                printf("%d", j);
            }
        }
        printf("\n");
    }

    return 0;
}