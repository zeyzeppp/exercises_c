#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main62()
{
      int a,b,c;
      printf("a: ");
      scanf("%d", &a);

      printf("b: ");
      scanf("%d", &b);

      printf("c: ");
      scanf("%d", &c);

      double x1,x2,delta;
      delta = (b*b)-(4*a*c);

      if(delta > 0)
      {
            x1 = (((-b)-(pow(delta, (1/2)))) / (2*a));
            x2 = (((-b)+(pow(delta, (1/2)))) / (2*a));
            printf("cift kok var: %f , %f", x1, x2);
      }
      else if(delta == 0)
      {
            x1 = (-b)/(2*a);
            printf("tek kok var: %f", x1);
      }
      else
      {
           printf("reel kok yok");}
}
