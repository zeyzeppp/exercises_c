#include <stdio.h>
#include <stdlib.h>

int main63()
{
      int password = 123456;
      int demo;
      int count = 1;

      printf("Please enter your password: ");
      scanf("%d", &demo);

      while(password != demo && count < 3)
      {
            printf("Please enter your password: ");
            scanf("%d", &demo);
            count++;
      }
      if(password == demo)
      {
            printf("You got it!");
      }

}
