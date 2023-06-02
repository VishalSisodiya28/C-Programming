#include <stdio.h>
#define max 30

void printLeaders(int arr[], int n)
{

    int largest = arr[n - 1];

    printf("Leaders are : ");

    printf("%d ", largest);

    for (int i = n - 1; i > 0; i--)
    {

        if (largest < arr[i - 1])
        {

            printf("%d ", arr[i - 1]);

            largest = arr[i - 1];
        }
    }
}

int main()
{
    int n, arr[max];

    printf("Enter number of elements : ");
    scanf("%d", &n);

    printf("Enter elements : ");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printLeaders(arr, n);

    return 0;
}