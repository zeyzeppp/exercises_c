#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main51()
{
      int a,b;//c hipotenus

      printf("ucgenin bir kenarini giriniz: ");
      scanf("%d", &a);

      printf("ucgenin diger kenarini giriniz: ");
      scanf("%d", &b);

      double c = sqrt(pow(a,2) + pow(b,2));

      printf("ucgenin hipotenusu %.2f", c);


      return 0;
}
