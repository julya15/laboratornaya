#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int A, B, i, k;
    printf("¬ведите A:");
    scanf_s("%i", &A);
    printf("¬ведите B:");
    scanf_s("%i", &B);
    i = A;
    while (i >= 0) {
        i -= B;
        k = i + B;
    }
    printf("ƒлинна незан€той части равна: %i\n", k);
    return 0;
}