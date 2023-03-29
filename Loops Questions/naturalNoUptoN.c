// Print natural number up to n.

#include <stdio.h>
int main()
{
    int i, n;

    printf("Enter number upto which you want to get numbers : ");
    scanf("%i", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%i ", i);
    }

    return 0;
}
