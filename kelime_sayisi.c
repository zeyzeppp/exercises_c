#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main25()
{

      char cumle[1000];

      printf("bir cumle giriniz: ");
      fgets(cumle, 1000, stdin);

      int count = 1;
      int i;

      for(i = 0; i < strlen(cumle); i++)
      {
            if(cumle[i] == ' ')
            {
                  count++;
            }
      }

      printf("%d", count);

      return 0;
}
