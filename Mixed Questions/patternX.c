
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of rows : ");
    scanf("%d", &n);

    //   for(int i=0;i<n;i++){
    //       for(int j=0;j<n;j++){
    //           if(i==j)
    //     printf("*");

    //     else if(i+j==n-1){
    //         printf("*");
    //     }

    //     else printf(" ");
    //       }
    //       printf("\n");
    //   }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf(" ");
        }

        printf("*");

        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            printf(" ");
        }

        if (i != n)
            printf("*");

        printf("\n");
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf(" ");
        }

        printf("*");

        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            printf(" ");
        }

        printf("*");

        printf("\n");
    }

    return 0;
}
