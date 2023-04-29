#include <stdio.h>
#include <stdlib.h>

int main34()
{
      int a[10];

      int i,j;

      for(i = 0; i < 10; i++)
      {
            printf("bir sayi giriniz: ");
            scanf("%d", &a[i]);

      }

      for(j = 0; j < 10; j++)
      {
            if(a[j] % 20 == 0)
            {
                  printf("%d\n", a[j]);
            }
      }
}
