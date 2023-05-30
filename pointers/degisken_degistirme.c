#include <stdio.h>
#include <stdlib.h>


void dd(int *, int *);



int main22()
{

      int sayi1,sayi2;

      printf("bir sayi giriniz: ");
      scanf("%d", &sayi1);

      printf("bir sayi giriniz: ");
      scanf("%d", &sayi2);


      dd(&sayi1, &sayi2);

      printf("sayi1 = %d \nsayi2 = %d", sayi1, sayi2);


      return 0;
}

void dd(int *x, int *y)
{
      int temp;

      temp = *x;
      *x = *y;
      *y = temp;

}
