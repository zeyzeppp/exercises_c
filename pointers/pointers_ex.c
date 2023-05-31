#include <stdio.h>
#include <stdlib.h>


int sinif1(int *);
int sinif2(int *);
int sinif3(int *);


int main19()
{
      int S1[3], S2[3], S3[3];
      int min1, min2, min3;

      min1 = sinif1(S1);
      min2 = sinif2(S2);
      min3 = sinif3(S3);

      printf("Sinif 1 en dusuk not: %d\n", min1);
      printf("Sinif 2 en dusuk not: %d\n", min2);
      printf("Sinif 3 en dusuk not: %d\n", min3);

      printf("siniflarin en dusuk degerlerinin ortalamalari: %d", (min1+min2+min3)/3);


      return 0;
}

int sinif1(int *S1)
{
      int i;
      printf("sinif1'in notlarini giriniz: ");
      scanf("%d", &S1[0]);
      int min1 = S1[0];

      for(i = 1; i < 3; i++)
      {
            printf("sinif1'in notlarini giriniz: ");
            scanf("%d", &S1[i]);

            if(min1 > S1[i])
            {
                  min1 = S1[i];

            }

      }

      return min1;
}

int sinif2(int *S2)
{
      int j;
      printf("sinif2'in notlarini giriniz: ");
      scanf("%d", &S2[0]);
      int min2 = S2[0];

      for(j = 1; j < 3; j++)
      {
            printf("sinif2'nin notlarini giriniz: ");
            scanf("%d", &S2[j]);

            if(min2 > S2[j])
            {
                  min2 = S2[j];

            }

      }

      return min2;
}

int sinif3(int *S3)
{
      int k;
      printf("sinif3'un notlarini giriniz: ");
      scanf("%d", &S3[0]);
      int min3 = S3[0];

      for(k = 1; k < 3; k++)
      {
            printf("sinif3'un notlarini giriniz: ");
            scanf("%d", &S3[k]);

            if(min3 > S3[k])
            {
                  min3 = S3[k];

            }

      }

      return min3;
}
