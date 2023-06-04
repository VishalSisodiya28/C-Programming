#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k)
{
    // all variable initialized below must not greater than k
    int largest_and = 0, largest_or = 0, largest_xor = 0;

    for (int i = 1; i <= n; i++)
    {

        for (int j = i + 1; j <= n; j++)
        {
            if ((i & j) > largest_and && (i & j) < k)
            {
                largest_and = i & j;
            }

            if ((i | j) > largest_or && (i | j) < k)
            {
                largest_or = i | j;
            }

            if ((i ^ j) > largest_xor && (i ^ j) < k)
            {
                largest_xor = i ^ j;
            }
        }
    }

    printf("%d\n%d\n%d", largest_and, largest_or, largest_xor);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);

    calculate_the_maximum(n, k);

    return 0;
}
