#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include "./include/schedule.h"

int txt_size = 0;
void sche_select()
{
 int choice;

 printf("\nSchedule Management  Menu!!\n");
 printf("1.Input the Schedule\n");
 printf("2.Print the Schedule\n");
 printf("3.Delete the Schedule\n");

 fflush(stdin);
 scanf("%d",&choice);
 fflush(stdin);

 switch(choice)
  {
   case 1: sche_input(); break;
   case 2: sche_show(); break;
   case 3: sche_delete(); break;
   default : printf("1 or 2 is available\n"); break;
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

 printf("d:%s e:%s", date, event);
 FILE * fp=fopen("sche.txt","a");
 if( fp == NULL)
 {
  perror("open");
  exit(0);
 }
 fprintf(fp,"Date : %s", date);
 fprintf(fp," Event : %s", event);
 txt_size++;
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
 int i = 0;
  while ( i++<txt_size )
  {
   pStr = fgets(strTemp, sizeof(strTemp),fp);
   printf("%d. %s",idx++, strTemp);
  }
}

void sche_delete()
{
 FILE * fp = fopen("sche.txt","r");
 if( fp == NULL)
 {
  perror("open");
  exit(0);
 }
 char strTemp[255];
 char *pStr[100];
 char *del;
 int idx = 0;
 int i = 0;
 int i_idx;
 int flag = 0;
 printf("What number you want to Delete?\n");
 scanf("%d",&idx);
 getchar();
 int k = 0;
 int count = 0;
  while ( count++ < txt_size )
  {
   if(k == idx)
    continue;
   pStr[k] = fgets(strTemp, sizeof(strTemp),fp);
   printf("k=%d,,%s",k,pStr[k]);
   k++;
  }
 txt_size--;

 fclose(fp);
 i_idx = k-1;


 FILE * fp2=fopen("sche.txt","w");
 if( fp2 == NULL)
 {
  perror("open");
  exit(0);
 }

 for (int j=0; j<txt_size; j++)
 {
  fprintf(fp2, "%s", pStr[j]);
 }
 fclose(fp2);
}

int main()
{
 while(1){
  sche_select();
 }
}
