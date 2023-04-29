#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int carpanlar(int);

int main40()
{
      int x,y;

      printf("x sayisini giriniz: ");
      scanf("%d", &x);
      printf("\ny sayisini giriniz: ");
      scanf("%d", &y);

      if(carpanlar(x)-x == y && carpanlar(y)-y == x)
      {
            printf("x ve y sayilari dost sayilardir.");
      }
      else
      {
            printf("x ve y sayilari dost sayilar degildir.");
      }

      return 0;
}

int carpanlar(int sayi)
{
      int i,j;
      int sum = 0;

      for(i = 1; i <= sayi; i++)
      {
            for(j = 1; j <= sayi; j++)
            {
                  if(i*j == sayi)
                  {
                        if(j == i)
                        {
                              sum += i;
                        }
                        else if(j != i)
                        {
                              sum += j;

                        }

                  }
            }
      }

      return sum;
}
