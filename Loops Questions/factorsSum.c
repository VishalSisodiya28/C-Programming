// Print the sum of all factors of a number, 50 - 1 + 2 + 5 + 10 + 25 = 43

#include <stdio.h>
int main()
{

    int n, i, sum = 0;
    printf("Enter number : ");
    scanf("%i", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {

            printf("%i ", i);
            sum = sum + i;
        }
    }
    printf("\nSum of all factors is : %i", sum);

    return 0;
}
