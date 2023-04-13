#include <stdio.h>

int main()
{

    int n;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements : ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];

    for (int i = 1; i < n; i++)
    {

        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    int count[max + 1];

    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {

        count[arr[i]]++;
    }

    printf("Number of times element appeared : \n");

    for (int i = 0; i <= max; i++)
    {

        if (count[i] != 0)
            printf("%d -> %d\n", i, count[i]);
    }

    return 0;
}