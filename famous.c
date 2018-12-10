#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "./include/famous.h"

void show_famous(void)
{
   int get_random_number(void);
   void print_saying(int);
   print_saying(get_random_number());
}

int get_random_number(void)
{
   srand(time(NULL));
   return rand() % 19 + 1;
}


void print_saying(int n)
{
     char* saying[20] = { "No pain No gain",
                             "Good words cost nothing",
                             "Deep sorrow has no tongue",
                             "A cold head and a warm heart",
                             "A great obstacle to happiness is to anticipate too great a happiness",
                             "A friend in need is a friend indeed",
                             "open your moyth only if you are going to say is more beautiful than silence",
                             "waste not fresh tears over old griefs",
                             "Secret of success is constancy to purpose",
                             "Necessity is the mother of invention",
                             "Courage is very important.Like a muscle, it is strengthened by use. ",
                             "Life is the art for drawing sufficient conclusions from insufficient premises. ",
                             "By doubting we come at the truth",
                             "A man that hath no virtue in himself, ever envieth virtue in others ",
                             "When money speaks, the truth keeps silent.",
                             "We give advice, but we cannot give conduct ",
                             "Nature never deceives us; it is always we who deceive ourselves ",
                             "Forgiveness is better than revenge ",
                             "Pain past is pleasure ",
                             "Think like a man of action and act like man of thought." };
   printf("\n Today famous saying...\n");
   puts(saying[n]);
   printf("\n\n\n");
}


