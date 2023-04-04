// Check if the number is Prime or not.

#include <stdio.h>
int main()
{
    int n, i, flag = 0;

    printf("Enter any number : ");
    scanf("%i", &n);

    if (n == 0 || n == 1)
        flag = 1;

    for (i = 2; i <= n / 2; i++)
    {

        if (n % i == 0)
        {
            flag = 1;
        }
    }

    if (flag == 0)
        printf("number is Prime");
    else
        printf("number is not Prime");

    return 0;
}
