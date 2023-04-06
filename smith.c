#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sayiBasamak_top(int);

int asalCarpan_top(int);

int main44()
{
      int x;
      printf("bir sayi giriniz: ");
      scanf("%d", &x);

      if(sayiBasamak_top(x) == asalCarpan_top(x))
      {
            printf("smith!");
      }
      else
      {
            printf("smith degil!");
      }


      return 0;
}

int sayiBasamak_top(int sayi)
{
      int sayi_top = 0;

      while(sayi >= 10)
      {
            sayi_top += sayi % 10;
            sayi = sayi / 10;
      }
      sayi_top += sayi;
      return sayi_top;

}

int asalCarpan_top(int number)
{

      int asal_top = 0;
      int i;

      for(i = 2; i <= number; i++)
      {
            while(number % i == 0)
            {

                  number = number / i;

                  asal_top += sayiBasamak_top(i);

            }

      }

      return asal_top;
}

