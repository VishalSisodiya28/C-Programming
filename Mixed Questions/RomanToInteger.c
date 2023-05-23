#include <stdio.h>
#include <string.h>
#define max 41

int getValue(char ch)
{
    switch (ch)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        return 0;
    }
}

int main()
{

    char s[max];

    int i = 0;

    int Integer = 0;

    printf("Enter roman numeral : ");
    scanf("%s", s);

    while (s[i] != '\0')
    {
        if (s[i + 1] != '\0' && getValue(s[i]) < getValue(s[i + 1]) && s[i] != 'D' && s[i] != 'V' && s[i] != 'L')
        {
            Integer += (getValue(s[i + 1]) - getValue(s[i]));

            i++;
        }

        else
            Integer += getValue(s[i]);

        i++;
    }

    if (Integer == 0)
        printf("Enter valid roman numeral");

    else
        printf("Integer value: %d\n", Integer);

    return 0;
}
