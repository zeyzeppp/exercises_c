#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main53()
{
      srand(time(NULL));
      int sayi = rand()%10 + 1;
      //printf("%d\n", sayi); ----> programý kontrol etmek icin yazýlabilir
      int tahmin;
      int sayac = 1;

      while(tahmin != sayi && sayac <= 3)
      {
            printf("bir sayi giriniz: ");
            scanf("%d", &tahmin);
            sayac++;

            if(tahmin == sayi)
            {
                  printf("tahmininiz dogru!\n");
            }
            else
            {
                  printf("tahmininiz yanlis!\n");
            }
      }
}
