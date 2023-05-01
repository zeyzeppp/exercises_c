#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char yazi_tura(int);

int main30()
{

      srand(time(NULL));

      int a;
      a = rand()%10 + 1;
      //printf("%d\n", a);----->kodu kontrol etmek icin yazýlabilir.
      yazi_tura(a);

}

char yazi_tura(int x)
{

      if(x % 2 == 0)
      {
            printf("tura");
      }
      else
      {
            printf("yazi");
      }

}
