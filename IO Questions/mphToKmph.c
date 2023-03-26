// Write a C program that converts kilometers per hour to miles per hour.

#include <stdio.h>
int main()
{

    int kms;
    float miles;

    printf("Enter speed in kilomters per hour : ");
    scanf("%i", &kms);

    miles = kms / 1.60934;

    printf("Speed in miles per second : %f", miles);

    return 0;
}
