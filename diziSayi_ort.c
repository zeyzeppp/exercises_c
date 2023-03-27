#include <stdio.h>
#include <stdlib.h>


/*.Girilecek 10 adet sayýyý bir diziye aktararak bu dizideki sayýlarýn
ortalamasýný bulduran programýyazýnýz. */


int main()
{
      int a[10];
      int i;
      double ort;
      int sum = 0;

      for(i = 0; i < 10; i++)
      {
            printf("bir sayi giriniz: ");
            scanf("%d", &a[i]);
            sum += a[i];
      }

      ort = sum/10;
      printf("girilen sayilarin ortalamasi = %f", ort);
}
