// Sum of digits of a number, 936 = 18

#include <stdio.h>
int main()
{

    int n, sum = 0;
    printf("Enter natural number : ");
    scanf("%i", &n);
    while (n > 0)
    {

        sum = sum + n % 10;
        n /= 10;
    }
    printf("Sum of digits of a number is : %i", sum);

    return 0;
}
