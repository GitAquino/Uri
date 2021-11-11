#include <stdio.h>

using namespace std;

void Ordenar( int a, int b, int c)
{

    int menor, meio, maior;

        if (a<b && a<c)
        {
            menor = a;

                if ( b < c)
                {
                    meio = b;
                    maior = c;
                }

                else  
                {
                    meio = c;
                    maior = b;
                }
        }

        else if (b<a && b<c)
        {
            menor = b;

                if (a<c)
                {
                    meio = a;
                    maior = c;
                }

                else 
                {
                    meio = c;
                    maior = a;
                }
        }

        else 
        {
            menor = c;

                if (a<b)
                {
                    meio = a;
                    maior = b;
                }

                else
                {
                    meio = b;
                    maior = a;
                }
        }
        printf("%d\n%d\n%d\n", menor,meio,maior);
}

int main (void)
{
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);

    Ordenar(a,b,c);
    printf ("\n%d\n%d\n%d\n", a,b,c);

}