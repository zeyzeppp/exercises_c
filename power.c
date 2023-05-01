#include <stdio.h>
#include <stdlib.h>


int power(int, int);

int main28()
{

      int taban;
      int kuvvet;

      printf("taban kismini giriniz: ");
      scanf("%d", &taban);


      printf("kuvvet kismini giriniz: ");
      scanf("%d", &kuvvet);

      printf("sonuc = %d", power(taban, kuvvet));



}

int power(int x, int y)
{
      int i;
      int result = 1;

      for(i = 1; i <= y; i++)
      {
            result = result * x;

      }

      return result;
}
