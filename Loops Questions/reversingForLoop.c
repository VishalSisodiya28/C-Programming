// Reverse for loop. Print n to 1.

#include <stdio.h>
int main()
{
    int i, n;

    printf("Enter the number from where you want to get numbers : ");
    scanf("%i", &n);

    for (i = n; i > 0; i--)
    {
        printf("%i ", i);
    }

    return 0;
}
