/* - Accept size n from user and create a n size array then take n inputs into the and finally
      Print the sum of all elements in the array in the following manner
     10 + 20 + 30 = 60 */

#include <stdio.h>
int main()
{

    int n, sum = 0;

    printf("Enter array size : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements : ");
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\nSum is %d", sum);

    return 0;
}
