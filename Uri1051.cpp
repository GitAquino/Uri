#include <stdio.h>

using namespace std;

int main (void)
{
    double salario, ir;

    scanf ("%lf", &salario);

    if (salario >= 0  && salario <= 2000)
    {
        printf ("Isento\n");
    }

    else if (salario > 2000 && salario <= 3000)
    {
        ir = (salario - 2000) * 0.08;
        printf ("R$ %.2lf\n", ir);
    }

    else if (salario > 3000 && salario <= 4500)
    {
        ir = 1000 * 0.08 + ((salario - 3000)*0.18);
        printf ("R$ %.2lf\n", ir);
    }

    else if (salario > 4500)
    {
        ir = (1000 * 0.08) + (1500 * 0.18) + ((salario - 4500)*0.28);
        printf ("R$ %.2lf\n", ir);
    }
}