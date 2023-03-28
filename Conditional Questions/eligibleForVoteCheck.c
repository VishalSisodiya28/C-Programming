/*Write a C program to read the age of a candidate and determine
whether it is eligible for casting his/her own vote.*/

#include <stdio.h>
int main()
{
    int age;
    printf("Enter age : ");
    scanf("%i", &age);
    if (age >= 18)
        printf("You are eligible to vote");
    else
        printf("You are not eligible to vote");
    return 0;
}
