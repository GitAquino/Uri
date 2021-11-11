#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
    int x;
    float y, consumo;

    scanf("%d %f", &x, &y);
    
    consumo = x/y;

    printf("%.3f km/l\n", consumo);

}