#include <stdio.h>

using namespace std;

void multiplos(int a, int b)
{
    int maior, menor;

    if (a<=b)
    {
        menor = a;
        maior = b;

        if (b%a==0)
        {
            printf("Sao Multiplos\n");
        }

        else 
        {
            printf ("Nao sao Multiplos\n");
        }
    }

    else 
    {
        menor = b;
        maior = a;

        if (a%b==0)
        {
            printf("Sao Multiplos\n");
        }

        else 
        {
            printf ("Nao sao Multiplos\n");
        }
    }
}

int main(void)
{
    int a,b;
    scanf ("%d %d", &a, &b);

    multiplos(a,b);
}