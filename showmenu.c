#include <stdio.h>
#include "./include/famous.h"
#include "./include/lotto.h"
#include "./include/rank.h"
#include "./include/schedule.h"
#include "./include/todayMenu.h"
#include "./include/todolist.h"
#include "./include/sendlist.h"

void showmenu()
{
   int showmenu = 0;
   printf("My Daily  (made by DJ & MH\n)");
   printf("Please press button\n\n");
   printf("1.Today Menu\n2.Today Rank(Search Rank & News Topic\n3.Today my schedule\n4.Today my todolist\n5.Today Famous saying\n6.Today Lotton/7.look on the WEB");
   printf("selection : ");
   scanf("%d", &showmenu);

   switch(showmenu)
   {
      case 1: show_todayMenu(); break;
      case 2: select_rank(); break;
      case 3: sche_select(); break;
      case 4: select_Todo(); break;
      case 5: show_famous(); break;
      case 6: show_lotto(); break;
      case 7: send_list(); break;
      default : printf("press any key for terminate\n"); break;
   }
}

