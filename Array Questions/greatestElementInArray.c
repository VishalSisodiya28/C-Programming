/*  Find the greatest element and print its index too.
   {2, 96, 69, 77, 145, 20} = Max element = 145 found at 4 index */

#include <stdio.h>
#define max 100

int main()
{

    int arr[max], n, largest, index;

    printf("Enter number of elements : ");
    scanf("%i", &n);

    printf("Enter elements : ");

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for (int i = 0; i < n; i++)
    {

        if (largest < arr[i])
        {

            largest = arr[i];
            index = i;
        }
    }

    printf("Max element = %i found at %i index", largest, index);

    return 0;
}
