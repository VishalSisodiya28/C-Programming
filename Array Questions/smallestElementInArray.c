/* Find the smallest element and print its index too.
      {2, 96, 69, 77, 145, 20} = Min element = 2 found at 0 index */

#include <stdio.h>
#define max 100

int main()
{

    int arr[max], n, minimum, index;

    printf("Enter number of elements : ");
    scanf("%i", &n);

    printf("Enter elements : ");

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }

    minimum = arr[0];
    index = 0;

    for (int i = 0; i < n; i++)
    {

        if (minimum > arr[i])
        {
            minimum = arr[i];
            index = i;
        }
    }

    printf("Min element = %i found at %i index", minimum, index);

    return 0;
}
