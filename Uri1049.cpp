#include <stdio.h>
#include <string.h>

using namespace std;

int main (void)
{
    char tipo1 [20];
    char tipo2 [20];
    char tipo3 [20];

    scanf ("%s %s %s", &tipo1, &tipo2, &tipo3);

    if (strcmp(tipo1, "vertebrado") == 0)
    {
       if (strcmp(tipo2, "ave") == 0)
       {
           if (strcmp(tipo3, "carnivoro") == 0)
           {
               printf ("aguia\n");
           }

           else if (strcmp(tipo3, "onivoro") == 0)
           {
               printf ("pomba\n");
           }
       }
       
        else if (strcmp(tipo2, "mamifero") == 0)
        {
            if (strcmp(tipo3, "onivoro") == 0)
            {
                printf("homem\n");
            }

            if (strcmp(tipo3, "herbivoro") == 0)
            {
                printf("vaca\n");
            }
        }
    }

    else if (strcmp(tipo1, "invertebrado") == 0)
    {
       if (strcmp(tipo2, "inseto") == 0)
       {
           if (strcmp(tipo3, "hematofago") == 0)
           {
               printf ("pulga\n");
           }

           else if (strcmp(tipo3, "herbivoro") == 0)
           {
               printf ("lagarta\n");
           }
       }

        else if (strcmp(tipo2, "anelideo") == 0)
        {
            if (strcmp(tipo3, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }

            if (strcmp(tipo3, "onivoro") == 0)
            {
                printf("minhoca\n");
            }
        }
       }
    }