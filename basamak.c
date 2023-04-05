#include <stdio.h>
#include <stdlib.h>


int main49()
{
      int dizi[] = {51, 55, 159, 746, 26, 3, 465, 2};
      int i;
      int birBasamakli = 0;
      int ikiBasamakli = 0;
      int ucBasamakli = 0;


      for(i = 0; i < 8; i++)
      {
            switch(dizi[i])
            {
                  case 0 ... 9:
                        birBasamakli++;
                        break;

                  case 10 ... 99:
                        ikiBasamakli++;
                        break;

                  case 100 ... 999:
                        ucBasamakli++;
                        break;

                  default:
                        printf("gecersiz!");
            }
      }

      printf(" bir basamakli: %d\n iki basamakli: %d\n uc basamakli: %d", birBasamakli, ikiBasamakli, ucBasamakli);


}
