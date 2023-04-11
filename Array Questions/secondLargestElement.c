/* Find the second greatest element
      {2, 96, 69, 77, 145, 20} = Second greatest element = 96 */

#include <stdio.h>
#define max 100

int main()
{

    int arr[max], n, temp;

    printf("Enter number of elements : ");
    scanf("%i", &n);

    printf("Enter elements :");

    for (int i = 0; i < n; i++)
    {

        scanf("%i", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] > arr[j])
            {

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Second greatest element = %i", arr[n - 2]);

    return 0;
}
