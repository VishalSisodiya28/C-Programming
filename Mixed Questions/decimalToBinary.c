#include <stdio.h>

int main()
{

    int num, index = 0, binary[20];

    printf("Enter decimal number : ");
    scanf("%d", &num);

    int temp = num;

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