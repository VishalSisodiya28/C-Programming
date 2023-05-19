
#include <stdio.h>
#include <math.h>
int main()
{
    int n = 1010, dec = 0, expo = 0;

    printf("Enter binary number : ");

    scanf("%d", &n);

    int temp = n;

    while (temp > 0)
    {

        dec += temp % 10 * pow(2, expo);

        expo++;

        temp /= 10;
    }

    printf("%d", dec);

    return 0;
}
