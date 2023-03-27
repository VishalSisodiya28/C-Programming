// Write a C program to check whether a given number is even or odd.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%i", &n);
    if (n % 2 == 0)
        printf("given number is Even");
    else
        printf("given number is Odd");

    return 0;
}
