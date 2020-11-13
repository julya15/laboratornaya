#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float V1, V2, s, T, S;
	printf("Введите скорость первого автомобиля в км/ч: ");
	scanf_s("%f", &V1);
	printf("Введите скорость второго автомобиля в км/ч: ");
	scanf_s("%f", &V2);
	printf("Введите расстояние между автомобилями в км: ");
	scanf_s("%f", &s);
	printf("Введите время в часах: ");
	scanf_s("%f", &T);
	S = s + V1 * T + V2 * T;
	printf("Расстояние между автомобилями равно: %f\n", S);
	return 0;
}