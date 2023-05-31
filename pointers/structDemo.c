#include <stdio.h>
#include <stdlib.h>

typedef struct
{

      char *isim;
      char *soyisim;
      int yas;
      int boy;
      int kilo;


}insan;

int main()
{
      insan zeynep;
      zeynep.isim = "zeynep";
      zeynep.soyisim = "alperen";
      zeynep.yas = 19;
      zeynep.boy = 163;
      zeynep.kilo = 57;

      printf("isim: %s\n", zeynep.isim);
      printf("soyisim: %s\n", zeynep.soyisim);
      printf("yas: %d\n", zeynep.yas);
      printf("boy: %d\n", zeynep.boy);
      printf("kilo: %d\n", zeynep.kilo);

}
