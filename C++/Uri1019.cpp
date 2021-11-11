#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(void)
{
    int n, hr, min;

    scanf("%d", &n);
    
    hr = (n/60)/60;
    min = (n/60)%60;
    n = (n%60)%60;

    printf ("%d:%d:%d\n", hr, min, n);


}