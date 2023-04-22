// Write a program in C to Concatenate Two Strings Manually.

#include <stdio.h>
#include <string.h>

int main()
{

    char str1[20], str2[20];

    printf("Enter first string : ");
    scanf("%s", str1);

    printf("Enter second string : ");
    scanf("%s", str2);

    int n = strlen(str1) + strlen(str2) + 1;

    char concatString[n];

    int j = 0;

    for (int i = 0; i < strlen(str1); i++)
    {
        concatString[j] = str1[i];
        j++;
    }

    for (int i = 0; i < strlen(str2); i++)
    {
        concatString[j] = str2[i];
        j++;
    }

    concatString[j] = '\0';

    printf("First string : %s", str1);
    printf("\nSecond string : %s", str2);

    printf("\nConcatenated string is : %s", concatString);

    return 0;
}