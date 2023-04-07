// Find the LCM of two numbers

#include <stdio.h>
int main()
{

    int n1, n2, lcm, max;
    scanf("%d %d", &n1, &n2);

    max = (n1 > n2) ? n1 : n2;
    for (int i = max;; i++)
    {

        if (i % n1 == 0 && i % n2 == 0)
        {
            printf("LCM is %d", i);
            break;
        }
    }

    return 0;
}
