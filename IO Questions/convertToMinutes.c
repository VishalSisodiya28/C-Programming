
#include <stdio.h>
int main()
{
    int hr, min;

    printf("Input hours : ");
    scanf("%i", &hr);

    printf("Input minutes : ");
    scanf("%i", &min);

    printf("Total : %i minutes.", hr * 60 + min);

    return 0;
}
