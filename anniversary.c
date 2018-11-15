#include <stdio.h>
#include <time.h>

void select()
{
 int choice;
 printf("Anniversary Menu!!\n");
 printf("1.Input the anniversary\n");
 printf("2.Print the anniverary\n");

 scanf("%d",&choice);
 switch(choice)
 {
  case 1: input(); break;
  case 2: show(); break;
  default : break;
 }
}

void input()
{}

void show()
{}
