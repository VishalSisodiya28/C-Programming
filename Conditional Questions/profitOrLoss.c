/* Write a C program to calculate profit and loss on a transaction accept cost price and
      selling price. */

#include <stdio.h>
int main()
{

    int cp, sp;

    printf("Enter cost price : ");
    scanf("%i", &cp);

    printf("Enter selling price : ");
    scanf("%i", &sp);

    if (cp > sp)
        printf("\nloss is : %i", cp - sp);

    else if (cp == sp)
        printf("\nno Profit no Loss");

    else
        printf("\nProfit is : %i", sp - cp);

    return 0;
}
