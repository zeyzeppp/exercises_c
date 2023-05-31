#include <stdio.h>
#include <stdlib.h>

/*
      & ----> AND
      | ----> OR
      ^ ----> XOR

*/

int main19()
{

      unsigned int a = 10; //decimal : 10 , binary : 1010
      unsigned int b = 5; //decimal : 5 , binary : 0101

      unsigned int c = a & b; // decimal: 0 , binary: 0000
      unsigned int d = a | b; // decimal: 15 , binary: 1111
      unsigned int e = a ^ b; // decimal: 15 , binary: 1111

      printf("AND : %u \n", c);
      printf("OR : %u \n", d);
      printf("XOR : %u \n", e);

      return 0;

}
