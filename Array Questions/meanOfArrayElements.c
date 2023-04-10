// Mean of array elements.

#include <stdio.h>
int main()
{

    int n;
    float mean = 0;

    printf("Enter array size : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements : ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        mean = mean + ((float)arr[i]) / n;
    }

    printf("Mean is : %.2f", mean);
    return 0;
}
