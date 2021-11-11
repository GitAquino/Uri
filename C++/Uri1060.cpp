#include <stdio.h>

using namespace std;

int main (void)
{
    float x;
    int i, soma=0;

    for (i=1; i<=6; i++)
    {
        scanf ("%f", &x);
        
        if (x>0)
        {
            soma++;
        }
    }
    printf("%d valores positivos\n", soma);
}