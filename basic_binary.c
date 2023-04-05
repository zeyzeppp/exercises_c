#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main48()
{
      int binary[6] = {1, 1, 0, 1, 0, 1};
      int i;
      int sum = 0;

      for(i = 0; i < 6; i++)
      {
            sum += binary[i] * (pow(2, (5-i)));
      }
      printf("%d", sum);
}

