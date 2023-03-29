/* Take a number as input and print its table
       5 * 1 = 5
       5 * 2 = 10 ... up to 10 termm */

#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter number : ");
    scanf("%i", &n);
    for (i = 1; i < 11; i++)
    {
        printf("\n%i * %i = %i", n, i, n * i);
    }

    return 0;
}
