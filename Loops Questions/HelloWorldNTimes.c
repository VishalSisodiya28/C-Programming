//  Accept an integer and Print hello world n times

#include <stdio.h>
int main()
{
    int n, i;

    printf("Enter number : \n");
    scanf("%i", &n);

    for (i = 1; i <= n; i++)
    {

        printf("Hello World\n");
    }

    return 0;
}
