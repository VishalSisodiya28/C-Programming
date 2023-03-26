/*Write a C program that prints the perimeter of a
rectangle to take its height and width as input */

#include <stdio.h>
int main()
{
    int l, b;

    printf("InputlLength : ");
    scanf("%i", &l);

    printf("Input breadth : ");
    scanf("%i", &b);

    printf("Perimeter : %i ", 2 * (l + b));

    return 0;
}
