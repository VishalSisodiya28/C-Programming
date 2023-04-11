
/*50 - Pallindromic array - Write a program to check if elements of an array are same or not it read from front or back
      Example : arr= [2,3,15,15,3,2] */

#include <stdio.h>
int main()
{

    int arr[10], arr2[10], n, temp, count = 0;

    printf("Enter number of elements : ");
    scanf("%i", &n);

    printf("Enter elements : ");

    for (int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
        arr2[i] = arr[i];
    }

    int start = 0, end = n - 1;

    while (start <= end)
    {

        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == arr2[i])
            count++;
    }
    if (count == n)
    {
        printf("It is a palindromic array!");
    }

    else
        printf("It is not a palindromic array");
}
