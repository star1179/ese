#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "../include/todolist.h"



void select_Todo()
{
   int pick=0;
   while(1)
   {
      printf("----------------------------------------------\n");
      printf("1. Make Todolist\n");
      printf("2. Show Todolist\n");
      printf("3. Terminate\n");
      printf("----------------------------------------------\n");
      printf("selection : ");
      scanf("%d", &pick);
      getchar();
      if(pick==1)
      {
        make_Todo();
      }
      else if(pick==2)
      {
        show_Todo();
      }
      else if(pick ==3)
      {
        break;
      }
   }
}

void show_Todo()
{
   char buf[255];
   FILE *fp=fopen("../txt/todo.txt","r");
   while (fgets(buf,256,fp) !=NULL)printf("%s \n",buf);
   fclose(fp);
}


void make_Todo()
{
   char todo[100];
   printf("please write on your todo : ");
   fgets(todo,sizeof(todo),stdin);
   fflush(stdin);

   printf("%s",todo); //for the check
   FILE *fp=fopen("../txt/todo.txt","a");

   if(fp==NULL)
   {
      perror("open error");
      exit(0);
   }
   fprintf(fp,"%s",todo);
   fclose(fp);
}

