#include <stdio.h>

using namespace std;

int main (void)
{
    float n1, n2, n3, n4, media, exame;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1*2 + n2*3 + n3*4 + n4*1)/10;

    printf("Media: %.1lf\n", media);

        if (media >= 7.0)
        {
            printf ("Aluno aprovado.\n");
        }

        else if (media < 5.0)
        {
            printf ("Aluno reprovado.\n");
        }

        else if (media >= 5.0)
        {
            printf ("Aluno em exame.\n");
            scanf("%f", &exame);
            printf("Nota do exame: %.1f\n", exame);

            if ((exame+media)/2 >= 5.0)
            {
                printf ("Aluno aprovado.\n");
            }

            else 
            {
                printf ("Aluno reprovado.\n");
            }

            printf ("Media final: %.1f\n", (exame + media)/2);

        }

}