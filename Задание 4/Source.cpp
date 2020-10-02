#include <math.h> 
#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float a, b, s, n, k, l;
	printf("Введите первую переменную: ");
	scanf_s("%f", &a);
	printf("Введите вторую переменную: ");
	scanf_s("%f", &b);
float modA = abs(a), modB = abs(b);
	s = modA + modB;
	printf("Сумма модулей равна: %f\n", s);
	s = modA - modB;
	printf("Разность модулей равна: %f\n", s);
	s = modA * modB;
	printf("Произведение модулей равно: %f\n", s);
	s = modA / modB;
	printf("Частное модулей равно: %f\n", s);
 return 0;
}