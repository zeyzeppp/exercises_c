#include <stdio.h>
#include <stdlib.h>

int main35()
{
      int a[10];
      int i,j,min_terim;

      for(i = 0; i < 10; i++)
      {
            printf("\nbir sayi giriniz: ");
            scanf("%d", &a[i]);

      }

      int min = a[0];

      for(j = 1; j < 10; j++)
      {

            if(min > a[j])
            {
                  min = a[j];
                  min_terim = j + 1;

            }
      }

      printf("\n%d", min_terim);

      return 0;

}
