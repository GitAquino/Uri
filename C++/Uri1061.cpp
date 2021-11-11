#include <stdio.h>

using namespace std;

int main(void)
{
    int dia, hora, minuto, segundo;
    int dia2, hora2, minuto2, segundo2;


    scanf ("Dia %d", &dia);
    scanf("%d : %d : %d\n", &hora, &minuto, &segundo);

    scanf ("Dia %d", &dia2);
    scanf("%d : %d : %d", &hora2, &minuto2, &segundo2);

    hora = hora2-hora;
    minuto = minuto2 - minuto;
    segundo = segundo2 - segundo;
    dia = dia2-dia;

        if (segundo < 0)
        {
            segundo += 60;
            minuto--;
        }

        if (minuto<0)
        {
            minuto += 60;
            hora--;
        }

        if (hora<0)
        {
            hora+=24;
            dia--;
        }
    
    printf ("%d dia(s)\n", dia);
    printf ("%d hora(s)\n", hora);
    printf ("%d minuto(s)", minuto);
    printf ("%d segundo(s)\n", segundo);

}