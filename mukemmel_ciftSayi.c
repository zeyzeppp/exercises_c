#include <stdio.h>
#include <stdlib.h>


int mukemmel(int);

int main37()
{
      int i;
      int ciftToplam = 0;
      for(i = 1; i < 100; i++)
      {
            if(i % 2 == 0)
            {
                  ciftToplam += i;
            }
      }


      if(ciftToplam == mukemmel(ciftToplam))
      {
            printf("cift sayilarin toplami mukemmel sayidir. ");
      }
      else
      {
            printf("cift sayilarin toplami mukemmel sayi degildir. ");
      }


      return 0;

}

int mukemmel(int sayi)
{

      int i, j;
      int sum = 0;

      for(i = 1; i < sayi; i++)
      {
            for(j = 1; j < sayi; j++)
            {
                  if(i*j == sayi)
                  {
                        if(i == j)
                        {
                              sum += i;
                        }
                        else
                        {
                              sum += j;
                        }
                  }
            }
      }

      sum++;

      return sum;
}
