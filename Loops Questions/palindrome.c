/* Accept a number and check if it is a pallindromic number (If number and its reverse are equal)
       Ex - 12321 - Rerverse - 12321*/

#include <stdio.h>
int main()
{
    int n, sum = 0, rem, temp;

    printf("Enter any number : ");
    scanf("%i", &n);
    temp = n;

    while (n > 0)
    {
        rem = n % 10;
        sum = sum * 10 + rem;
        n /= 10;
    }
    if (sum == temp)
        printf("%i is a palindrome", temp);

    else
        printf("%i is not a palindrome", temp);

    return 0;
}
