// Sum up to n terms.

#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter any number : ");
    scanf("%i", &n);
    for (i = 1; i <= n; i++)
    {

        sum += i;
    }
    printf("\nThe sum upto %i terms is : %i", n, sum);

    return 0;
}
