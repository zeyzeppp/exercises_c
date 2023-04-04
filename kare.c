#include <stdio.h>
#include <stdlib.h>

//karsilikli kenarlar a,c ; b,d
int main58()
{
      int a,b,c,d;
      printf("dortgenin kenarlarini giriniz: ");
      scanf("%d, %d, %d, %d", &a, &b, &c, &d);

      if(a == c && b == d && a == d)
      {
            printf("kare");
      }
      else
      {
            printf("kare degil");
      }

      return 0;
}
