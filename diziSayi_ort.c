#include <stdio.h>
#include <stdlib.h>


/*.Girilecek 10 adet say�y� bir diziye aktararak bu dizideki say�lar�n
ortalamas�n� bulduran program�yaz�n�z. */


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
