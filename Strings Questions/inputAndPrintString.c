// Write a program in C to input a string and print it

#include <stdio.h>
int main()
{
    char name[20];

    printf("Enter your name : ");
    scanf("%s", &name);

    printf("Your name is : %s", name);

    return 0;
}