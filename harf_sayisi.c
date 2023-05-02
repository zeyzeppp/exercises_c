#include <stdio.h>
#include <stdlib.h>

int main26()
{

      char kelime[100];
      int sayac = 0;

      int i;

      printf("bir kelime yaziniz: ");
      scanf("%s", kelime);

      for(i = 0; i < 100; i++)
      {

            if(kelime[i] != '\0')
            {
                  sayac++;
            }

            else
            {
                  break;
            }
      }

      printf("%d", sayac);

      return 0;

}
