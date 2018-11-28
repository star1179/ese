#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include "./include/schedule.h"

void sche_select()
{
 int choice;

 printf("Schedule Management  Menu!!\n");
 printf("1.Input the Schedule\n");
 printf("2.Print the Schedule\n");
 printf("3.Print the Schedule\n");

 scanf("%d",&choice);
 fflush(stdin);

 switch(choice)
  {
   case 1: sche_input(); break;
   case 2: sche_show(); break;
   default : printf("1 or 2 is available\n"); break;
  }
}

void sche_input()
{
 char date[30];
 char event[30];
 printf("input the date[20181225] event[meet the santa]\n");

 scanf("%s",date);
 getchar();
 fgets(event, sizeof(event), stdin);

 fflush(stdin);

 printf("d:%s e: %s\n", date, event);
 FILE * fp=fopen("sche.txt","a");
 if( fp == NULL)
 {
  perror("open");
  exit(0);
 }
 fprintf(fp,"Date : %s", date);
 fprintf(fp," Event : %s\n", event);

 fclose(fp);
}

void sche_show()
{
 FILE * fp = fopen("sche.txt","r");
 if( fp == NULL)
 {
  perror("open");
  exit(0);
 }
 char strTemp[255];
 char *pStr;
 int idx = 0;
  while ( !feof(fp) )
  {
   pStr = fgets(strTemp, sizeof(strTemp),fp);
   printf("%d. %s",idx++, strTemp);
  }
}

void sche_del()
int main()
{
 while(1){
  sche_select();
 }
}
