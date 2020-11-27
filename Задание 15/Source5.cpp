#include <math.h>
#include<stdio.h>
#include<locale.h> 
float Fact2(int N) {
    int i;
    i = 1;
    for (; N > 0; N -= 2)
        i *= N;
    return i;
}
int main(void)
{
    setlocale(LC_ALL, "Russian");
    int i, N, n;
    for (i = 1; i <= 2; i++) {
        printf("Введите N:");
        scanf_s("%i", &N);
        n = Fact2(N);
        printf("Факториал равен: %i\n", n);
    }
    return 0;
}