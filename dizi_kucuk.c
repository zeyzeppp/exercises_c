#include <stdio.h>
#include <stdlib.h>

int main46()
{
      int sayilar[5] = {52, 10, 20, 11, 2023};
      int sayi,i;
      int count = 0;

      printf("bir sayi giriniz: ");
      scanf("%d", &sayi);

      for(i = 0; i < 5; i++)
      {
            if(sayi < sayilar[i])
            {
                  count++;
            }
      }

      printf("%d sayisi sayilar dizisindeki %d elemandan kucuktur.", sayi, count);
}
