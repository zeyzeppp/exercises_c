#include <stdio.h>
#include <stdlib.h>


int kuvvet(int, int);

int main36()
{

      int i, j;

      printf("taban kismini giriniz: ");
      scanf("%d", &i);

      printf("\nkuvvet kismini giriniz: ");
      scanf("%d", &j);

      printf("\ncevap = %d", kuvvet(i, j));



}

int kuvvet(int x, int y)
{
      int result = 1;
      int i;
      for(i = 1; i <= y; i++)
      {
            result *= x;
      }

      return result;
}
