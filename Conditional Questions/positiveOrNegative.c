/*Write a C program to check whether
 a given number is positive or negative.*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%i", &n);
    if (n < 0)
        printf("Given number is Negative");
    else
        printf("Given number is Positive");
    return 0;
}
