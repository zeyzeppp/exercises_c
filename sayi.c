#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int fact(int);
int main57()
{
      int sayi;
      printf("bir sayi giriniz: ");
      scanf("%d", &sayi);

      if(sayi < 5)
      {
            sayi = fact(sayi);
            printf("%d", sayi);
      }
      else if(sayi > 10)
      {
            double sayi1 = ((sayi/2) - 1);
            printf("%f", sayi1);
      }
      else
      {
            int sayi2 = pow(sayi, 2);
            printf("%d", sayi2);
      }

      return 0;
}
int fact(int num)
{
      if(num == 0 || num == 1)
      {
            return 1;
      }

      return fact(num-1)*num;
}
