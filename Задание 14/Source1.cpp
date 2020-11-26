#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int A, B, i, j;
    printf("¬ведите A:");
    scanf_s("%i", &A);
    printf("¬ведите B:");
    scanf_s("%i", &B);
    for (i = A; i <= B; i++) {
        for (j = 1; j <= i; j++)
            printf("%i ", i);
        printf("\n");
    }

    return 0;
}