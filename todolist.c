#include <stdio.h>
#include "Todolist.h"

struct node
{
        int i;
        struct node *next;
};
struct node *head = 0;

void addTosll(char n)
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
}


