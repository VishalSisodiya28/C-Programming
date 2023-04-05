/* Accept a number and check if it is a armstrong number (Sum of cube of all digits will be equal to origional number)
       Ex - 407 = 64 + 0 + 343 = 407
              153 = 1 + 125 + 27 = 153*/

#include <stdio.h>
#include <math.h>
int main()
{
    int n, sum = 0, count = 0, rem, temp;

    printf("Enter number : ");
    scanf("%i", &n);
    temp = n;

    while (n > 0)
    {
        rem = n % 10;
        sum += pow(rem, 3);
        n /= 10;
    }

    if (temp == sum)
        printf("Number is armstrong");

    else
        printf("Number is not armstrong");

    return 0;
}
