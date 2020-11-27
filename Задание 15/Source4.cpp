#include <math.h>
#include<stdio.h>
#include<locale.h> 
int Quarter(float x, float y) {
    if ((x > 0) && (y > 0)) {
        return 1;
    }
    if ((x < 0) && (y > 0)) {
        return 2;
    }
    if ((x < 0) && (y < 0)) {
        return 3;
    }
    if ((x > 0) && (y < 0)) {
        return 4;
    }
}
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int i, q;
    float x, y;
    for (i = 1; i <= 3; i++) {
        printf("Введите координату x:");
        scanf_s("%f", &x);
        printf("Введите координату y:");
        scanf_s("%f", &y);
        q = Quarter(x, y);
        printf("Номер координатной четверти:%i\n", q);
    }
    return 0;
}