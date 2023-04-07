// Take 2 numbers as inputs and find their HCF/GCD.

#include <stdio.h>
int main()
{

    int hcf, n1, n2, i, lcm;
    printf("Enter two numbers : ");
    scanf("%i %i", &n1, &n2);
    for (i = 1; i <= n1 && i <= n2; i++)
    {

        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }
    printf("\nHCF of %i and %i is %i", n1, n2, hcf);
    //  printf("\nLCM of %i ans %i is %i",n1,n2,(n1*n2)/hcf);

    return 0;
}
