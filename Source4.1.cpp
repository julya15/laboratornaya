#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float x1, y1, x2, y2, p, s;
	printf("Введите координаты первой точки через пробел: ");
	scanf_s("%f %f", &x1, &y1);
	printf("Введите координаты второй точки через пробел: ");
	scanf_s("%f %f", &x2, &y2);
	p = 2 * (abs(x1 - x2) + abs(y1 - y2));
	s = abs(x1 - x2) * abs(y1 - y2);
	printf("Периметр прямоугольника равен: %f\n", p);
	printf("Площадь прямоугольника равна: %f\n", s);
	return 0;
}