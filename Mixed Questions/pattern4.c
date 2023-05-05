/*
Mirrored Right Triangle

            *
          * *
        * * *
      * * * *
    * * * * *

*/

#include <stdio.h>

int main()
{
  int n;

  printf("Number of rows : ");

  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {

    for (int j = 1; j <= n; j++)
    {
      if (j < n + 1 - i)
      {
        printf(" ");
      }

      else
      {

        printf("*");
      }
    }

    printf("\n");
  }

  return 0;
}