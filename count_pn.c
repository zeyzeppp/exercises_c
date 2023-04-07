#include <stdio.h>
#include <stdlib.h>

int main43()
{
      int a[5];
      int i;
      int n_count = 0;
      int p_count = 0;


      for(i = 0; i < 5; i++)
      {
            printf("bir sayi giriniz: ");
            scanf("%d", &a[i]);

            if(a[i] < 0)
            {
                  n_count++;
            }
            else if(a[i] > 0)
            {
                  p_count++;
            }
            else
            {
                  printf("gecersiz sayi\n gecerli bir sayi giriniz:");
                  scanf("%d", &a[i]);

                  if(a[i] < 0)
                  {
                        n_count++;
                  }
                  else
                  {
                        p_count++;
                  }

            }
      }


      printf("%d pozitif sayi, \n%d negatif sayi", p_count, n_count);

      return 0;
}
