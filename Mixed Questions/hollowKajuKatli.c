
#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of rows : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i) - 1; j++)
        {
            printf("*");
        }

        for (int k = 0; k < 2 * i; k++)
        {

            printf(" ");
        }
        for (int l = 0; l < (n - i) - 1; l++)
        {
            printf("*");
        }

        if (i < n - 1)
            printf("\n");
    }

    printf("\r");

    for (int i = n - 2; i >= 0; i--)
    {

        for (int j = 0; j < (n - i) - 1; j++)
        {
            printf("*");
        }

        for (int k = 0; k < 2 * i; k++)
        {

            printf(" ");
        }
        for (int l = 0; l < (n - i) - 1; l++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

/*

#include <stdio.h>

int main()
{
  int n=8;

  for(int i=0;i<n;i++){

      for(int j=0;j<n-i;j++){

         printf(" ");

      }
     printf("*");



      for(int l=0;l<2*i-1;l++)
        printf(" ");


      if(i!=0)
      printf("*");

      printf("\n");

  }

  for(int i=n-2;i>=0;i--){

      for(int j=0;j<n-i;j++){

         printf(" ");

      }
     printf("*");



      for(int l=0;l<2*i-1;l++)
        printf(" ");


      if(i!=0)
      printf("*");

      printf("\n");

  }

    return 0;
}
    
*/