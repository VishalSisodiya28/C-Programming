/*Write a C program to find whether
a given year is a leap year or not. */

#include <stdio.h>
int main()
{
    int year;
    printf("Enter year : ");
    scanf("%i", &year);
    if (year % 4 == 0)

        printf("leap year");
    else
        printf("not a leap year");

    return 0;
}
