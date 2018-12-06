#include <stdio.h>
#include "annyversary.h"
#include "Todayfamoussayin.h"
#include "Todolist.h"

void showmenu()
{
   int showmenu = 0;
   printf("My Daily  (made by DJ & MH\n)");
   printf("Please press button\n\n");
   printf("1.To do list\n2.Today famous saying\n3.anniversary\n");
   printf("selection : ");
   scanf("%d", &showmenu);

   switch(showmenu)
   {
      case 1: show_todayMenu(); break;
      case 2: show_searchRank(); break;
      case 3: sche_select(); break;
      case 4: select_Todo(); break;
      case 5: show_famous(); break;
      case 6: show_lotto(); break;
   }
}

