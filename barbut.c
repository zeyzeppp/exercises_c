#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//barbut oyunu

//void specifies that the function takes no parameters

int barbut(void);

int main54()
{
      int toplam, oyuncununSayisi;

      srand(time(NULL));

      toplam = barbut();
      printf("%d\n", toplam);

      if(toplam == 11 || toplam == 7)
      {
            printf("kazandiniz!");
      }
      else if(toplam == 2 || toplam == 3 || toplam == 12)
      {
            printf("kaybettiniz!");
      }
      else
      {
            oyuncununSayisi = toplam;

            toplam = barbut();

            if(toplam == 7)
            {
                  printf("kaybettiniz!");
            }

            while(toplam != 7)
            {
                  toplam = barbut();
                  printf("%d\n", toplam);

                  if(toplam == oyuncununSayisi)
                  {
                        printf("kazandiniz!");
                        break;
                  }
                  if(toplam == 7)
                  {
                        printf("kaybettiniz!");
                  }
            }

      }

      return 0;
}

int barbut(void)
{
      int zar1,zar2,zar_toplam;
      zar1 = (rand()%6 + 1);
      zar2 = (rand()%6 + 1);
      zar_toplam = zar1 + zar2;
      return zar_toplam;
}
