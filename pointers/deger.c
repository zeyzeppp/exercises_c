#include <stdio.h>
#include <stdlib.h>

/*call by value(deger ile cag�rma)

fonksiyonun icinde yap�lan degisiklikler, orijinal degisiklikleri etkilemez
bu yontem degerlerin degismesini onler

*/

int value(int);


int main24()
{
      int sayi;

      printf("bir sayi giriniz: ");
      scanf("%d", &sayi);

      printf("%d\n", value(sayi));

      printf("%d", sayi);

      return 0;

}

int value(int x)
{
      return ++x;
}

