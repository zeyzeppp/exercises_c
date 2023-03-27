#include <stdio.h>
#include <stdlib.h>

int main60()
{
      int sayi,sum1,sum2,sum,i;
      int basamak[4];

      printf("dort basamakli bir sayi giriniz: ");
      scanf("%d", &sayi);

      while(sayi > 10)
      {
            for(i = 0; i < 4; i++)
            {
                  basamak[i] = sayi%10;
                  sayi = sayi/10;

            }
      }
      sum1 = basamak[0] + basamak[1];
      sum2 = basamak[2] + basamak[3];
      sum = sum1 + sum2;

      if(sayi == sum)
      {
            printf("orijinal sayi");
      }
      else
      {
            printf("orijinal sayi degil");
      }


      return 0;
}
