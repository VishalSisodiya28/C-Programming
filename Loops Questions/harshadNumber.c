/*36 - Accept a number and check if it is a Harshad number
      Harshad number is a number or an integer which is completely divisible by sum of  its digits.
      Ex - 24 = Sum of 2+4 = 6 & 24%6 = 0 */

#include <stdio.h>
int main()
{

    int n, i, rem, sum = 0, temp;

    printf("Enter any number : ");
    scanf("%d", &n);

    temp = n;

    while (n > 0)
    {

        rem = n % 10;
        sum = sum + rem;
        n /= 10;
    }
    n = temp;

    if (n % sum == 0)
        printf("Harshad number");

    else
        printf("not a Harshad number");

    return 0;
}
