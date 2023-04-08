// Write a program in C to find the sum of the series like 1 +11 + 111 + 1111 + .. n terms for any number.

#include <stdio.h>
int main()
{

    int i, n, d, sum = 0, first, temp;

    printf("Enter number : ");
    scanf("%i", &n);

    printf("Enter number of times : ");
    scanf("%i", &d);

    first = n;
    temp = first;

    for (i = 1; i <= d; i++)
    {

        printf(" %i", first);
        sum = sum + first;
        first = 10 * first + temp;
    }

    printf("\nThe sum is : %i", sum);

    return 0;
}
