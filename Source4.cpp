#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float a, b, s, n, k, l;
	printf("Введите первое ненулевое число: ");
	scanf_s("%f", &a);
	printf("Введите второе ненулевое число: ");
	scanf_s("%f", &b);
	s = a * a + b * b;
	n = a * a - b * b;
	k = a * a * b * b;
	l = (a * a) / (b * b);
	printf("Сумма квадратов равна: %f\n", s);
	printf("Разность квадратов равна: %f\n", n);
	printf("Произведение квадратов равна: %f\n", k);
	printf("Частное квадратов равна: %f\n", l);
	return 0;
}
