// Print all the numbers which are either divisible by 3 or 5 in a range

#include <stdio.h>
int main()
{

    int i, n;
    printf("Enter limit : ");
    scanf("%i", &n);
    printf("The numbers which are divisible by 3 and 5 are : ");
    for (i = 0; i <= n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            printf("%i ", i);
    }

    return 0;
}
