// Write a C program to find the largest of three numbers.

#include <stdio.h>
int main()
{
    int n1, n2, n3;

    printf("Enter three numbers : ");

    scanf("%i %i %i", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3)
        printf("%i is largest", n1);

    else if (n2 > n1 && n2 > n3)
        printf("%i is largest", n2);

    else
        printf("%i is largest", n3);

    return 0;
}
