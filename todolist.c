#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "./include/todolist.h"

struct node
{
  int i;
  char *todo;
  struct node *next;
};
struct node *head = 0;


void select_Todo()
{
   int pick=0;
   while(1)
   {
      printf("----------------------------------------------\n");
      printf("1. show Todolist\n");
      printf("2. Make Todolist\n");
      printf("press any key button for terminate\n");
      printf("----------------------------------------------\n");
      printf("selection : ");
      scanf("%d", &pick);
      getchar();
      if(pick==1)
      {
        show_Todo();
      }
      else if(pick==2)
      {
        make_Todo();
      }
      else
        break;
   }
}

void show_Todo()
{
   char buf[255];
   FILE *fp=fopen("todo.txt","r");
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
   FILE *fp=fopen("todo.txt","a");

   if(fp==NULL)
   {
      perror("open error");
      exit(0);
   }
   fprintf(fp,"%s",todo);
   fclose(fp);
}

int main(void)
{
   select_Todo();
}
