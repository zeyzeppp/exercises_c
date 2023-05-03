#include <stdio.h>
#include <stdlib.h>

int main24()
{

      int i;

      for(i = 1; i < 10; i++)
      {
            switch(i)
            {

                  case 1 ... 10:
                        printf("%d\n", i);
                        break;


                  default:
                        printf("hata");



            }
      }
}
