#include <stdio.h>

int main()
{

    int n = 16;
    int temp = n;

    int index = 0;
    int binary[20];

    while (temp > 0)
    {

        if (temp % 2 == 0)
            binary[index] = 0;
        else
            binary[index] = 1;

        index++;
        temp /= 2;
    }

    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d ", binary[i]);
    }

    return 0;
}