// C program for Binary Search in Array

#include <stdio.h>

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)

        printf("%d ", arr[i]);

    int start = 0, end = 9, middle, searching = 4;

    while (start <= end)
    {

        middle = (start + end) / 2;

        if (arr[middle] == searching)
        {

            printf("\nFound !");
            break;
        }

        else if (searching > arr[middle])
        {

            start = middle + 1;
        }

        else if (searching < arr[middle])
        {

            end = middle - 1;
        }
    }

    return 0;
}
