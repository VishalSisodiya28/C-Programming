/*Write a C program to accept the height of a person in centimeter and categorize the person
   according to their height if below 150 he is dwarf if above 150 and below 200 average and
   above 200 tall.*/

#include <stdio.h>
int main()
{
    int height;

    printf("Enter height in centimeters : ");
    scanf("%i", &height);

    if (height >= 200)
        printf("You are tall");

    else if (height > 150)
        printf("You are average");

    else
        printf("You are dwarf");
    return 0;
}
