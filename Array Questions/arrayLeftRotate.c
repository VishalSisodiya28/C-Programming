// Array left rotation by K elements

#include <stdio.h>
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    int count = sizeof(arr) / sizeof(int);
    int arr2[count];
    int progress = 0, k;

    printf("How many rotations ? ");
    scanf("%d", &k);

    for (int i = count - k; i < count; i++)
    {
        arr2[progress] = arr[i];
        progress++;
    }

    for (int i = 0; i < count - k; i++)
    {

        arr2[progress] = arr[i];
        progress++;
    }
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
