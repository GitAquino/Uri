#include <stdio.h>

using namespace std;

int main(void)
{
    
    double salario, reajuste;

    scanf("%lf", &salario);

    reajuste = salario;

    if (salario >= 0 && salario <= 400.00)
    {
        salario = salario + (salario * 0.15);
        printf ("Novo salario: %.2lf\n", salario);
        printf ("Reajuste ganho: %.2lf\n", reajuste*0.15);
        printf ("Em percentual: 15 %\n");
    }

    else if (salario > 400.00 && salario <= 800.00)
    {
        salario = salario + (salario * 0.12);
        printf ("Novo salario: %.2lf\n", salario);
        printf ("Reajuste ganho: %.2lf\n", reajuste*0.12);
        printf ("Em percentual: 12 %\n");
    }

    else if (salario > 800.00 && salario <= 1200.00)
    {
        salario = salario + (salario * 0.10);
        printf ("Novo salario: %.2lf\n", salario);
        printf ("Reajuste ganho: %.2lf\n", reajuste*0.10);
        printf ("Em percentual: 10 %\n");
    }

    else if (salario > 1200 && salario <= 2000.00)
    {
        salario = salario + (salario * 0.07);
        printf ("Novo salario: %.2lf\n", salario);
        printf ("Reajuste ganho: %.2lf\n", reajuste*0.07);
        printf ("Em percentual: 7 %\n");
    }

    else if (salario > 2000)
    {
        salario = salario + (salario * 0.04);
        printf ("Novo salario: %.2lf\n", salario);
        printf ("Reajuste ganho: %.2lf\n", reajuste*0.04);
        printf ("Em percentual: 4 %\n");
    }

}