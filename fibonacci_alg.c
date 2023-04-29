#include <stdio.h>
#include <stdlib.h>


int main39()
{

      int terim1 = 1;
      int terim2 = 1;

      printf("%d\n", terim1);
      printf("%d\n", terim2);

      int terim_n;
      int count;


      for(count = 3; count <= 10; count++)
      {
            terim_n = terim1 + terim2;

            printf("%d\n", terim_n);

            terim1 = terim2;
            terim2 = terim_n;

      }


}
