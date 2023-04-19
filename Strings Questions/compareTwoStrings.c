// compare two strings if identical print (identical) else (not identical)

#include <stdio.h>

int main()
{

    char str1[10] = "Vishal";
    char str2[10] = "Vishal ";

    int i = 0;
    int isIdentical = 1;

    while (str1[i] != '\0' || str2[i] != '\0')
    {

        if (str1[i] != str2[i])
        {
            isIdentical = 0;
            break;
        }

        i++;
    }

    if (isIdentical)

        printf("Strings are Identical");

    else

        printf("Not Identical !");

    return 0;
}