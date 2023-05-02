/*
 Inverted Right Triangle
    * * * * *
    * * * *
    * * *
    * *
    *
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Number of rows : ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {

            printf("* ");
        }

        printf("\n");
       }

    return 0;
}