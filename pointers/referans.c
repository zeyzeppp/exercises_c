#include <stdio.h>
#include <stdlib.h>


/*
Call By Reference(Referans ile cag�rma)

bir fonksiyona arg�man olarak gecirilen degerin bellek adresini alarak cal�s�r
bu durumda fonksiyon icinde yap�lan degisiklikler orijinal deger etkiler
*/

int referans(int *);

int main23()
{

      int sayi;

      printf("bir sayi giriniz: ");
      scanf("%d", &sayi);

      printf("%d\n", referans(&sayi));

      printf("%d\n", sayi);



      return 0;
}

int referans(int *z)
{
      return ++(*z);
}
