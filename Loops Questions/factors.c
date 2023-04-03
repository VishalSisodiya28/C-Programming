// Print all the factors of a number.

#include <stdio.h>
int main()
{

    int n, i;
    printf("Enter number : ");
    scanf("%i", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            printf("%i ", i);
    }

    return 0;
}
