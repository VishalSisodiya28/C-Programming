// Write a C program to accept two integers and check whether they are equal or not.

#include <stdio.h>
int main()
{

    int n1, n2;

    printf("Enter first number : ");
    scanf("%i", &n1);

    printf("Enter second number : ");
    scanf("%i", &n2);

    if (n1 == n2)
        printf("\nThey are equal !");

    else
        printf("\nThey are not equal !");

    return 0;
}
