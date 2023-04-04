#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main56()
{
      int k;
      int max_k = 0;
      int count = 0;

      printf("bir sayi giriniz: ");
      scanf("%d", &k);
      printf("sayi: %d\n", k);

      while(k != 1)
      {
            if(k > max_k)
            {
                  max_k = k;
            }

            if(k%2 == 0)
            {
                  k = k / 2;
                  count++;
            }
            else
            {
                  k = k*3 + 1;
                  count++;
            }
      }
      printf("islem sayisi: %d\n", count);
      printf("en buyuk sayi: %d\n", max_k);

}
