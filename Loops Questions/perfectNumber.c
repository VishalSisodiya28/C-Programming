/*  Accept a number and check if it a perfect number or not.
      A number whose sum of factors(excluding number itself)  = Number
      Ex -  6 = 1, 2, 3 = 6 */
#include <stdio.h>
int main()
{

    int n, i, sum = 0;

    printf("Enter number : ");
    scanf("%i", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
        printf("\nPerfect number !");

    else
        printf("\nNot a perfect number");

    return 0;
}
