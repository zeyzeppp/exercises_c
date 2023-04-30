#include <stdio.h>
#include <stdlib.h>


int main31()
{
      int sayi[10];
      int yeni[10];
      int i, j;

      for(i = 0; i < 10; i++)
      {
            printf("bir sayi giriniz: ");
            scanf("%d", &sayi[i]);


            if(i % 2 == 0)
            {
                  yeni[i] = sayi[i];
            }

            else
            {
                  yeni[10 - i] = sayi[i];

            }


      }

      for(j = 0; j < 10; j++)
      {
            printf("\n%d", yeni[j]);
      }
}
