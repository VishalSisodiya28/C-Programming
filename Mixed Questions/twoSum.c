/*Write a C program to get the indices of the two numbers of a given array of integers,
such that the sum of the two numbers equal to a specific target.

  Original Array: 4  2  1  5
  Target Value: 7*/

#include <stdio.h>

int main()
{

    int arr[] = {4, 2, 1, 5};
    int target = 10;
    int n = sizeof(arr) / sizeof(int);
    int check = 0, n1, n2;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] + arr[j] == target)
            {
                check = 1;
                n1 = arr[i];
                n2 = arr[j];
            }
        }
    }

    if (check)
    {
        printf("Found!\nNumbers are : %d  %d", n1, n2);
    }
    else
    {
        printf("Not Found!");
    }

    return 0;
}