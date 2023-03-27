/*Write a C program to read the value of an integer m and display the value of n is 1 when m is
   larger than 0, 0 when m is 0 and -1 when m is less than 0. */

#include <stdio.h>
int main()
{
    int m;
    printf("Enter the value of m : ");
    scanf("%i", &m);
    if (m > 0)
        printf("n is 1");
    else if (m < 0)
        printf("n is -1");
    else
        printf("n is 0");
    return 0;
}
