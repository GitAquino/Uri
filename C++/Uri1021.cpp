#include <stdio.h>
int main(void)
{
    double n, D, E;
    int Aux, AuxC, AuxM, B;
    int c100, c50, c20, c10, c5, c2;
    int m1, m50, m25, m10, m05, m01;

        scanf ("%lf",&n);

    Aux=n;
    c100 = Aux/100;
    AuxC = Aux%100;

    c50=AuxC/50;
    AuxC %= 50;

    c20=AuxC/20;
    AuxC %= 20;

    c10=AuxC/10;
    AuxC %= 10;

    c5=AuxC/5;
    AuxC %= 5;

    c2=AuxC/2;

    m1=AuxC % 2;

//-------------------------------

    E=n*100; // Multiplica por cem para que possamos fazer a divisão das moedas
    B=(int) E; // Transforma o E em int
    AuxM = B%100;

    m50=AuxM/50;
    AuxM %= 50;

    m25=AuxM/25;
    AuxM %= 25;

    m10=AuxM/10;
    AuxM %= 10;

    m05=AuxM/5;

    m01=AuxM % 5;

//-------------------------------

    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n",c100);
    printf ("%d nota(s) de R$ 50.00\n",c50);
    printf ("%d nota(s) de R$ 20.00\n",c20);
    printf ("%d nota(s) de R$ 10.00\n",c10);
    printf ("%d nota(s) de R$ 5.00\n",c5);
    printf ("%d nota(s) de R$ 2.00\n",c2);
    printf ("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n",m1);
    printf ("%d moeda(s) de R$ 0.50\n",m50);
    printf ("%d moeda(s) de R$ 0.25\n",m25);
    printf ("%d moeda(s) de R$ 0.10\n",m10);
    printf ("%d moeda(s) de R$ 0.05\n",m05);
    printf ("%d moeda(s) de R$ 0.01\n",m01);

}