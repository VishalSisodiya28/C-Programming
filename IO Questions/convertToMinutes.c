/*
  Write a C program that takes hours and minutes as input, and calculates the total number 
  of minutes.
  Expected Output :
  Input hours: 5
  Input minutes: 37
  Total: 337 minutes.
*/
#include <stdio.h>
int main()
{
    int hr, min;

    printf("Input hours : ");
    scanf("%i", &hr);

    printf("Input minutes : ");
    scanf("%i", &min);

    printf("Total : %i minutes.", hr * 60 + min);

    return 0;
}
