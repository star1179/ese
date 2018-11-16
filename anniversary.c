#include <stdio.h>
#include <time.h>
#include "anniversary.h"

void anni_select()
{
 int choice;

 printf("Anniversary Menu!!\n");
 printf("1.Input the anniversary\n");
 printf("2.Print the anniverary\n");


 scanf("%d",&choice);
 while(1){
  switch(choice)
  {
   case 1: input(); break;
   case 2: show(); break;
   default : printf("1 or 2 is available\n") break;
  }
 }

}

void anni_input()
{
 char date[];
 char event[];
 printf("input the date and event [20181225]\n");
 gets(date);
 getchar();
 print("input the event [meet the santa]\n");
 gets(event);

 FILE * fd=fopen("anni.txt","a");
 fputs(date);
 fputs(" ");
 fputs(event);

 fclose(fp);
}

void anni_show()
{}
