#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "the Vishal Sisodiya is the thethe thethe ";

    int n = strlen(str);

    int count = 0;

    for (int i = 0; i < n; i++)
    {

        if (str[i] == 't' && i < n - 2 && str[i + 1] == 'h' && str[i + 2] == 'e')
        {

            if (i == 0 || str[i - 1] == ' ')
            {

                if (i + 3 == '\0' || str[i + 3] == ' ')
                {
                    count++;
                }
            }
        }
    }

    printf("'the' appeared %d times\n", count);

    return 0;
}
