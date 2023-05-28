#include <stdio.h>

int main()
{

    int num, index = 0, binary[20];

    printf("Enter decimal number : ");
    scanf("%d", &num);

    int temp = num;

    while (temp > 0)
    {

        binary[index] = temp % 2;

        index++;
        temp /= 2;
    }

    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d ", binary[i]);
    }

    return 0;
}