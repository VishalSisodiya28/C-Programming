#include <stdio.h>

int main()
{

    int n = 5;
    int t = 0, t2 = 0;

    for (int i = 0; i < n; i++)
    {
        t2 = 0;

        for (int j = 0; j < n - i - 1; j++)
        {

            printf("  ");

            t2++;
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {

            if (t2 < n)
            {
                t++;

                printf("%d ", t);
            }

            else
            {
                t--;

                printf("%d ", t);
            }

            t2++;
        }

        printf("\n");
    }

    return 0;
}