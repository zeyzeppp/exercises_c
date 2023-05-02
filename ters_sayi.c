#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//4 basamakli sayiyi ters cevirme

int ters_sayi(int);

int main26()
{

      int x;

      printf("bir sayi giriniz: ");
      scanf("%d", &x);

      printf("%d", ters_sayi(x));



}

int ters_sayi(int sayi)
{

      int i = 0;
      int a[4];
      int result = 0;

      for(i = 0; i < 4; i++)
      {
            a[3 - i] = sayi % 10;
            sayi = sayi / 10;
            result += a[3 - i]*(pow(10, (3 - i)));


      }

      return result;

}
