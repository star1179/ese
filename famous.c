#include <stdio.h>
#include "famous.h"

void Todayfamoussaying()
{
        char *buffer[40] = { "No pain No gain",
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

        //buffer check
        for (int i = 0; i < 20; i++)
        {
                printf("%s \n",buffer[i]);
        }
}

