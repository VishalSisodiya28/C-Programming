// Factorial of a number

#include <stdio.h>
int main()
{
    int n, factorial = 1, i;
    printf("Number : ");
    scanf("%i", &n);

    for (i = n; i > 0; i--)
    {

        factorial = factorial * i;
    }
    printf("Factorial is : %i", factorial);

    return 0;
}
