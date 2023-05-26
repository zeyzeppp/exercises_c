#include <stdio.h>
#include <stdlib.h>


/*
Call By Reference(Referans ile cagırma)

bir fonksiyona argüman olarak gecirilen degerin bellek adresini alarak calısır
bu durumda fonksiyon icinde yapılan degisiklikler orijinal deger etkiler
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
