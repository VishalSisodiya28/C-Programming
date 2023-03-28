// Accept two numbers from user and swap their values

#include <stdio.h>
int main()
{
    int a, b, temp;

    printf("Enter value of A : ");
    scanf("%i", &a);

    printf("Enter value of B : ");
    scanf("%i", &b);

    temp = a;
    a = b;
    b = temp;

    printf("\nSwapped value of A is : %i", a);
    printf("\nSwapped value of B is : %i", b);

    return 0;
}
