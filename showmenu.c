#include <stdio.h>
#include "annyversary.h"
#include "Todayfamoussayin.h"
#include "Todolist.h"

void showmenu()
{
   int showmenu = 0;
   printf("Please press button\n\n");
   printf("1.To do list\n2.Today famous saying\n3.anniversary\n");
   printf("selection : ");
   scanf("%d", &showmenu);

   if (showmenu == 1)
   {
      Todolist();
   }
   else if (showmenu == 2)
   {
      Todayfamoussaying();
   }
   else if(showmenu == 3)
   {
      anniversary();
   }
   else
   {
      printf("Invalid input is detected!!\n");
      break;
   }
}

