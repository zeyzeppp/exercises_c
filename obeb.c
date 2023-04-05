#include <stdio.h>
#include <stdlib.h>

int obeb(int, int);

int main52()
{
      int sayi1,sayi2;

      printf("iki sayi giriniz: ");
      scanf("%d %d", &sayi1, &sayi2);

      printf("obeb(%d, %d) = %d", sayi1, sayi2, obeb(sayi1, sayi2));

      return 0;
}

int obeb(int x, int y)
{

      int temp = x % y;
      while(temp != 0)
      {
            x = y;
            y = temp;
            temp = x % y;
      }
      return y;
}
