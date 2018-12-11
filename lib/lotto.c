#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/lotto.h"

void show_lotto()
{
   int i, j, a;
   int num = 1;
   int lotto[6];

   srand((unsigned)time(0));
   while (num != 0)
   {
      printf("please press any button to get lotto number with enter(0:exit)");
      scanf("%d", &num);
      if (num == 0)
      {
         printf("thank you for used");
         break;
      }
      a = 0;
      while (a < 6)
      {
         lotto[a] = rand() % 45 + 1;
         for (i = 0; i < a; i++)
         {
            if (lotto[i] == lotto[a])
            a--;
         }
         a++;
      }
      printf("lucky number is : ");
      for (j = 0; j < 6; j++)
      {
         printf("%d  ", lotto[j]);
      }

   printf("\n\n");
   }
}
