/*Accept a number and check if it is a strong number or not (Sum of factorial of each digit)
       Ex- 145 = 1! + 4! + 5! = 145 */

#include <stdio.h>
int main()
{

    int fact = 1, i, rem, sum = 0, n, temp;

    printf("Enter number : ");
    scanf("%d", &n);

    temp = n;

    while (n > 0)
    {

        rem = n % 10;

        for (i = rem; i > 0; i--)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        fact = 1;
        n /= 10;
    }

    if (sum == temp)
    {
        printf("\nNumber is strong nummber");
    }

    else
        printf("\nNumber is not strong number");

    return 0;
}
