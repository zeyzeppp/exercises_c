#include <stdio.h>
#include <stdlib.h>

int main50()
{

      char not;
      printf("harf notunu giriniz: ");
      scanf("%c", &not);

      switch(not)
      {
            case 'A' :
                  printf("cok iyi");
                  break;

            case 'B' :
                  printf("iyi");
                  break;

            case 'C' :
                  printf("orta");
                  break;

            case 'D' :
                  printf("gecer");
                  break;

            case 'F' :
                  printf("basarisiz");
                  break;

            default:
                  printf("lutfen gecerli bir not giriniz!");

      }

}
