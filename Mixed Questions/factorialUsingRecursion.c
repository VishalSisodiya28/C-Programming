#include <stdio.h>

int fact(int n)
{
    if (n > 0)
        return n * fact(n - 1);

    else
       
        return 1;
}

int main()
{
    int factorial = fact(4);

    printf("%d", factorial);

    return 0;
}
