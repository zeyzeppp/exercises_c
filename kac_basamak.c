#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main32()
{
      int a[10];
      int i;

      for(i = 0; i < 10; i++)
      {
            printf("\nbir sayi giriniz: ");
            scanf("%d", &a[i]);

            if(a[i] < 10)
            {
                  printf("bir basamaklidir.");

            }
            else if(a[i] < 100)
            {
                  printf("iki basamaklidir.");

            }
            else if(a[i] < 1000)
            {
                  printf("uc basamaklidir.");
            }

      }
}
