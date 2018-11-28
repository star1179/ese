#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include "anniversary.h"

void anni_select()
{
 int choice;

 printf("Anniversary Menu!!\n");
 printf("1.Input the anniversary\n");
 printf("2.Print the anniverary\n");


 scanf("%d",&choice);
 fflush(stdin);
 int quit=0; //for termination
 while(1){
  switch(choice)
  {
   case 1: anni_input(); break;
   case 2: anni_show(); break;
   default : printf("1 or 2 is available\n"); break;
   printf("Do you want to Continue? 1:yes other:no\n");
   scanf("%d",&quit);
   if(quit != 1)
    break;
  }
 }
}

void anni_input()
{
 char date[30];
 char event[30];
 printf("input the date[20181225] event[meet the santa]\n");

 scanf("%s",date);
 getchar();
 fgets(event, sizeof(event), stdin);

 getchar();
 fflush(stdin);

 printf("d:%s e: %s\n", date, event);
 FILE * fp=fopen("anni.txt","a");
 if( fp == NULL)
 {
  perror("open");
  exit(0);
 }
 fprintf(fp,"Date : %s", date);
 fprintf(fp," Event : %s\n", event);

 fclose(fp);
}

void anni_show()
{
 FILE * fp = fopen("anni.txt","r");
 if( fp == NULL)
 {
  perror("open");
  exit(0);
 }
 char strTemp[255];
 char *pStr;
  while ( !feof(fp) )
  {
   pStr = fgets(strTemp, sizeof(strTemp),fp);
   printf("%s",strTemp);
  }
}
