#include <stdio.h>
#include <stdlib.h>

int main45()
{
      int sayi, i;
      printf("bir sayi giriniz: ");
      scanf("%d", &sayi);

      for(i = 2; i <= sayi; i++)
      {
            while(sayi % i == 0)
            {
                  printf("asal carpan = %d\n", i);
                  sayi = sayi / i;
            }
      }
      return 0;
}
