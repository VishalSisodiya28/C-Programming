/* accept marks of 4 subjects and calculate percentage if percentage is below 35% - F
   below 45% - D below 55% - C below 75% - B above 75% - A */

#include <stdio.h>
int main()
{
    int s1, s2, s3, s4;
    float p;

    printf("Marks obtained in subject 1 : ");
    scanf("%i", &s1);

    printf("Marks obtained in subject 2 : ");
    scanf("%i", &s2);

    printf("Marks obtained in subject 3 : ");
    scanf("%i", &s3);

    printf("Marks obtained in subject 4 : ");
    scanf("%i", &s4);

    p = (s1 + s2 + s3 + s4) / 4.0;

    if (p >= 75)
        printf("\nGrade A");

    else if (p < 75 && p >= 55)
        printf("\nGrade B");

    else if (p < 55 && p >= 45)
        printf("\nGrade C");

    else if (p < 45 && p >= 35)
        printf("\nGrade D");

    else
        printf("\nFail");

    return 0;
}
