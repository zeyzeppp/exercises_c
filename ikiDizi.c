#include <stdio.h>
#include <stdlib.h>


int main33()
{
      int a[10];
      int b[5];

      int i,j;

      for(i = 0; i < 10; i++)
      {
            printf("dizinin elemanini giriniz: ");
            scanf("%d", &a[i]);
      }

      for(j = 0; j < 5; j++)
      {
            b[j] = (a[j] + a[j + 1]) / 2;
            printf("\n%d", b[j]);
      }

}
