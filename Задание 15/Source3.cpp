#include <math.h>
#include<stdio.h>
#include<locale.h> 
float RingS(float R1, float R2) {
    return 3.14 * (R1 * R1 - R2 * R2);
}
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int i;
    float R1, R2, S;
    for (i = 1; i <= 3; i++) {
        printf("¬ведите радиус R1:");
        scanf_s("%f", &R1);
        printf("¬ведите радиус R2:");
        scanf_s("%f", &R2);
        S = RingS(R1, R2);
        printf("ѕлощадь равна:%f\n", S);
    }
    return 0;
}