#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    float A, s, a;
    int N, i;
    printf("¬ведите A:");
    scanf_s("%f", &A);
    printf("¬ведите N:");
    scanf_s("%i", &N);
    a = 1;
    s = 1;
    for (i = 2; i <= N + 1; i++)
    {
        a *= -A;
        s += a;
    }
    printf("—умма равна %f \n ", s);

    return 0;
}