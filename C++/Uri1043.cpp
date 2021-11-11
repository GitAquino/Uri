#include <stdio.h>

using namespace std;

void triangulo(float a, float b, float c)
{
    float area, perimetro;
    
    if (a<b+c && b<a+c && c<b+a)
    {
        perimetro = a + b +c;
        printf ("Perimetro = %.1f", perimetro);
    }

    else 
    {
        area = ((b+a)*c)/2;
        printf ("Area = %.1f", area);
    }
}

int main(void)
{
    float a,b,c;
    scanf ("%f %f %f", &a, &b, &c);

    triangulo(a,b,c);
}