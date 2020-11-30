#include <stdio.h>
#include <math.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int m[10];
    int N, i, j;
    i = 1;
    j = 1;
    printf("¬ведите N: ");
    scanf_s("%i", &N);
    for (i = 0; i < N; i++, j += 2)
        m[i] = j;
    for (i = 0; i < N; i++)
        printf("%i : %i\n", i, m[i]);
    return 0;
}