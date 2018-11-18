#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "anniversary.h"

void anni_select()
{
 int choice;

 printf("Anniversary Menu!!\n");
 printf("1.Input the anniversary\n");
 printf("2.Print the anniverary\n");


 scanf("%d",&choice);
 fflush(stdin);
// while(1){
  switch(choice)
  {
   case 1: anni_input(); break;
   case 2: anni_show(); break;
   default : printf("1 or 2 is available\n"); break;
  }
// }

}

void anni_input()
{
 char date[30];
 char event[30];
 printf("input the date[20181225] event[meet the santa]\n");

 scanf("%s",date);
 fgets(event, sizeof(event), stdin);

 //date[strlen(date)-1] = '\n';
 getchar();
 //event[strlen(event)-1] = '\n';
 fflush(stdin);

 printf("d:%s e: %s\n", date, event);
 FILE * fp=fopen("anni.txt","a");
 fprintf(fp,"Date : %s", date);
 fprintf(fp,"event : %s\n", event);

 fclose(fp);
} 

void anni_show()
{}
