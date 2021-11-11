#include <stdio.h>

using namespace std;

int main (void)
{
    int inicial, final, intervalo;

    scanf ("%d %d", &inicial, &final);

    if (inicial > final)
    {
        intervalo = (24-inicial)+final;
    }

    else if (inicial < final)
    {
        intervalo = final - inicial;
    }

    else 
    {
        intervalo = 24;
    }

    printf ("O JOGO DUROU %d HORA(S)", intervalo);
}