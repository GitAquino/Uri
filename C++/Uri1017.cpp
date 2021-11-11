#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
    int tempo, velomedia;
    float litros;

        scanf("%d %d", &tempo, &velomedia);
        litros = ((double)tempo * velomedia)/12;

        printf ("%.3f\n", litros);
}