//  Fibonacci series - 0, 1, 1, 2, 3, 5, 8, 13, 21...

#include <stdio.h>
int main()
{

    int i, first = 0, second = 1, n, next;

    printf("Upto how many terms : ");
    scanf("%i", &n);

    for (i = 1; i <= n; i++)
    {

        printf("%i, ", first);

        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
