#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errono.h>
#include "Todolist.h"

struct node
{
  int i;
  char *todo;
  struct node *next;
};
struct node *head = 0;


void todolist_select()
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
      fflush(stdin);
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

void addToSLL(int priority,char * str)
{
   struct node *new_one = (struct node *)malloc(sizeof(struct node));
   new_one->i = n;
   new_one->todo = str;
   new_one->next = 0;

   if (head == 0)
   {
       head = new_one;
       return;
   }
   struct node *temp = head;
   while (1)
   {
      if (temp->next == 0)
      {
          temp->next = new_one;
          return;
      }
      temp = temp->next;
   }
}

void show_Todo()
{
   int priority;
   char *todo;
   struct node *temp = head;
   FILE *fp=fopen("todo.txt","r");
   while (fscanf(fp,"%d %s",priority,todo)!=EOF)
   {
      addToSLL(priority,todo);
   }
   while(1)
   {
      if (temp == 0)
      {
          return;
      }
      printf("priority : %d || todo:  %s\n", temp->i,temp->todo);
      temp = temp->next;
   }
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
