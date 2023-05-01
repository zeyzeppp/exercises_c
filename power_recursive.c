#include <stdio.h>
#include <stdlib.h>


int pow_rec(int, int);

int main27()
{

      int taban;
      int kuvvet;

      printf("taban kismini giriniz: ");
      scanf("%d", &taban);

      printf("kuvvet kismini giriniz: ");
      scanf("%d", &kuvvet);

      printf("sonuc = %d", pow_rec(taban, kuvvet));
}

int pow_rec(int x, int y)
{

      if(y == 0)
      {
            return 1;

      }
      else if(y == 1)
      {

            return x;
      }
      else
      {
            return x * pow(x, y - 1);
      }
}
