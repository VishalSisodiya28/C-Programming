#include <stdio.h>

int main()
{

    int n;

    printf("Enter no. of rows : ");
    scanf("%d", &n);

    printf("\n");

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {

            if (j < n - i + 1)
            {
                printf(" ");
            }

            else
            {

                printf("%d ", i);
            }
        }

        printf("\n");
    }

    return 0;
}