#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errono.h>
#include "Todolist.h"

struct node
{
  int i;
  struct node *next;
};
struct node *head = 0;


void todolist_select()
{
   int pick=0;

   printf("----------------------------------------------\n");
   printf("1. show Todolist\n");
   printf("2. Make Todolist\n");
   printf("3. delete Todolist\n");
   printf("4. Change importance\n");
   printf("press any key button for terminate\n");
   printf("----------------------------------------------\n");
   printf("selection : ");
   scanf("%d", &pick);
   fflush(stdin);
   while(1)
   {
      if(pick==1)
      {
        todolist_show();
      }
      else if(pick==2)
      {
        todolist_make();
      }
      else if(pick==3)
      {
        todolist_delete();
      }
      else if(pick==4)
      {
        todolist_importance();
      }
      else
        break;
   }
}

void todolist_make(char n)
{
   struct node *new_one = (struct node *)malloc(sizeof(struct node));
   new_one->i = n;
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

   char todo[100];
   printf("please write on your todo : "); 
   scanf("%s",todo);
   fgets(todo,sizeof(todo_,stdin);
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

void todolist_show()
{
   struct node *temp = head;
   while (1)
   {
      if (temp == 0)
      {
          return;
      }
      printf("%d\n", temp->i);
      temp = temp->next;
   }
}

void insertToSLL(int where, int what)
{
   struct node *wp = head;
   while (1)
   {
      if (wp == 0)
      {
         break;
      }
      if (wp->data == where)
      {
         break;
      }
      wp = wp->next;
   }
   {
      struct node *cur;
      cur = (struct node *)malloc(sizeof(struct node));
      cur->data = what;
      cur->next = 0;

      if (wp == 0)
      {
         cur->next = head;
         head = cur;
         return;
      }
      else
      {
         cur->next = wp->next;
         wp->next = cur;
         return;
       }
   }
}


