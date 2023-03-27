#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main61()
{
      int a,b,aci;

      printf("a: ");
      scanf("%d", &a);

      printf("b: ");
      scanf("%d", &b);

      printf("aci: ");
      scanf("%d", &aci);

      double alan = (a*b*sin(aci))/2;

      printf("ucgenin alani = %f", alan);

      return 0;
}

