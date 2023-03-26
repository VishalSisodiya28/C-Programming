/*
  Write a program in C that takes minutes as input, and display the total number of hours and
  minutes.
  Expected Output :
  Input minutes: 546
  9 Hours, 6 Minutes
*/

#include <stdio.h>
int main()
{

    int min;

    printf("Input minutes : ");
    scanf("%i", &min);

    printf("%i Hours, %i Minutes", min / 60, min % 60);

    return 0;
}
