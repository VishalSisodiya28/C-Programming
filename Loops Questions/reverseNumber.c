// Accept a number and print its reverse

#include <stdio.h>
int main()
{
    int n, sum = 0, rem;

    printf("Enter any number : ");
    scanf("%i", &n);

    while (n > 0)
    {
        rem = n % 10;
        sum = sum * 10 + rem;
        n /= 10;
    }

    printf("Reverse number is : %i", sum);

    return 0;
}
