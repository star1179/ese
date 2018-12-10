#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "./include/schedule.h"
void sche_select()
{
 int choice;
 int ex = 0;
 while(ex != 1){
 printf("------------------------------------------\n");
 printf("1. Make Schedule\n");
 printf("2. Show Schedule\n");
 printf("3. Terminate\n");
 printf("------------------------------------------\n");

 fflush(stdin);
 scanf("%d",&choice);
 fflush(stdin);

 switch(choice)
  {
   case 1: sche_input(); break;
   case 2: sche_show(); break;
   case 3: ex =1 ; break;
   default : printf("1 or 2 or 3 is available\n"); break;
  }
 }
}

void sche_input()
{
 char date[30];
 char event[30];
 printf("input the date[20181225] event[meet the santa]\n");

 scanf("%s",date);
 fgets(event, sizeof(event), stdin);
 fflush(stdin);

 FILE * fp=fopen("./txt/sche.txt","a");
 if( fp == NULL)
 {
  perror("open");
  exit(0);
 }
 fprintf(fp,"Date : %s", date);
 fprintf(fp," Event : %s", event);
 fclose(fp);
}

void sche_show()
{
 FILE * fp = fopen("./txt/sche.txt","rt+");
 if( fp == NULL)
 {
  perror("open");
  exit(0);
 }
 char buf[255];
 printf("Schdule list\n");
 while(fgets(buf,256,fp) != NULL) printf("- %s",buf);
 fclose(fp);
}


