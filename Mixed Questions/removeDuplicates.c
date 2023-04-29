#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    int arr[n];

    printf("Insert elements : ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {

                for (int k = j + 1; k < n; k++)
                {
                    arr[k - 1] = arr[k];
                }

                n--;
                i--;
            }
        }
    }

    printf("Array after removing duplicates elements : ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}