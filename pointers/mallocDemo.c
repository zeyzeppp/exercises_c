#include <stdio.h>
#include <stdlib.h>


int main20()
{
      int i,j;

      int *ptr = (int *)malloc(5 * sizeof(int));

      for(i = 0; i < 5; i++)
      {
            printf("bir sayi giriniz: ");
            scanf("%d", &ptr[i]);
      }

      for(j = 0; j < 5; j++)
      {
            if(ptr[j] % 2 == 0)
            {
                  printf("%d\n", ptr[j]);

            }
      }

      free(ptr);


      return 0;

}
