/*Write a program in C to replace the spaces of a string with a specific character.
      take the specific character and string as input */

#include <stdio.h>
#include <string.h>

int main()
{

    char str[] = "Vishal Sisodiya";
    char ch, ch2;

    printf("Enter a new character : ");
    scanf("%c", &ch);

    printf("Which character do you want to replace : ");

    fflush(stdin);
    scanf("%c", &ch2);

    for (int i = 0; i < strlen(str); i++)
    {
        if (ch2 == str[i])
        {
            str[i] = ch;
        }
    }

    printf("%s", str);
    return 0;
}