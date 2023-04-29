#include <stdio.h>
#include <stdlib.h>


int mukemmelSayi(int);

int main38()
{
      int x;

      printf("bir sayi giriniz: ");
      scanf("%d", &x);

      if(x == mukemmelSayi(x))
      {
            printf("%d mukemmel sayidir.", x);
      }

      else
      {
            printf("%d mukemmel sayi degildir.", x);
      }


      return 0;

}

int mukemmelSayi(int sayi)
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

      sum = sum + 1;//her sayi 1' e bolunur

      return sum;
}
