#include <stdio.h>

void printPrimeNumbers(int range)
{
    if (range <= 0)
    {

        printf("Invalid Range!");

        return;
    }

    for (int i = 1; i <= range; i++)
    {

        int flag = 0;

        for (int j = 2; j < i; j++)
        {

            if (i % j == 0 && i != 2)
            {

                flag = 1;
            }
        }

        if (flag == 0 && i > 1)
        {

            if (i == 2)
                printf("%d", i);

            else
                printf(", %d", i);
        }
    }
}

int main()
{

    int range;

    printf("Enter a range : ");
    scanf("%d", &range);

    printPrimeNumbers(range);

    return 0;
}