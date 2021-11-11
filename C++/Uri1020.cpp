#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(void)
{
    int n, ano, mes;

    scanf ("%d", &n);

    ano = n/365;
    mes = (n%365)/30;
    n = (n%365)%30;

    printf ("%d ano(s)\n", ano);
    printf ("%d mes(es)\n", mes);
    printf ("%d dia(s)\n", n);


}