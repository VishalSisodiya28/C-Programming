// 44 - Print array in ascending or descending order

#include <stdio.h>
#include <math.h>

int main()
{

    int arr[20], n, t;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    printf("Enter elements : ");

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] > arr[j])
            { //  For descending order use "<" sign

                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }
    return 0;
}
