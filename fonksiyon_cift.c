#include <stdio.h>
#include <stdlib.h>

int cift_mi(int);

int main32()
{

      int x;

      printf("bir sayi giriniz: ");
      scanf("%d", &x);

      printf("%d", cift_mi(x));
}

int cift_mi(int sayi)
{

      int output;

      if(sayi % 2 == 0)
      {
            output = 1;
      }
      else
      {
            output = 0;
      }


      return output;


}
