//  Write a C program to check whether an alphabet is a vowel or consonant.

#include <stdio.h>
int main()
{

    char ch;
    printf("Enter any character : ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("\nYou entered vowel");

    else
        printf("\nYou entered consonant");

    return 0;
}
