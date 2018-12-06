#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "famous.h"

void main(void)
{
   int get_random_number(void);
   void print_saying(int);
   print_saying(get_random_number());
}

int get_random_number(void)
{
   srand(time(NULL));
   return radn() % 19 + 1;
}


void print_saying(int n)
{
        char *buffer[20] = { "No pain No gain",
                             "Good words cost nothing",
                             "Deep sorrow has no tongue",
                             "A cold head and a warm heart",
                             "A great obstacle to happiness is to anticipate too great a happiness",
                             "A friend in need is a friend indeed",
                             "open your moyth only if you are going to say is more beautiful than silence",
                             "waste not fresh tears over old griefs",
                             "Secret of success is constancy to purpose",
                             "Necessity is the mother of invention",
                             "At the height of laughter the " }

   puts(buffer[n]);
}


