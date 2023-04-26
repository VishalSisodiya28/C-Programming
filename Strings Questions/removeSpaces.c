// remove the spaces of a string

#include <stdio.h>
#include <string.h>

int main()
{

    char str[30];
    printf("Enter a string : ");
    fgets(str, 30, stdin);

    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {

        if (str[i] == ' ')
        {
            for (int j = i; j < n - 1; j++)
            {
                str[j] = str[j + 1];
            }
            n--;
            i--;
        }
    }
    printf("New String : ");
    for (int i = 0; i < n; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}