// Print the sum of all even & odd numbers seperately.

#include <stdio.h>
int main()
{

    int n, sum1 = 0, sum2 = 0, i;
    printf("Enter no. upto which you want to get sum : ");
    scanf("%i", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum1 = sum1 + i;
        }
        else
        {
            sum2 = sum2 + i;
        }
    }
    printf("\nSum of even numbers is : %i", sum1);
    printf("\nSum of odd numbers is : %i", sum2);

    return 0;
}
