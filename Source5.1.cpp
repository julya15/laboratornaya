#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float x1, y1, x2, y2, x3, y3, p, P, s, a, b, c;
	printf("¬ведите координаты первой точки через пробел: ");
	scanf_s("%f %f", &x1, &y1);
	printf("¬ведите координаты второй точки через пробел: ");
	scanf_s("%f %f", &x2, &y2);
	printf("¬ведите координаты третей точки через пробел: ");
	scanf_s("%f %f", &x3, &y3);
	a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	P = a + b + c;
	p = P / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("ѕериметр треугольника равен: %f\n", P);
	printf("ѕлощадь треугольника равна: %f\n", s);
	return 0;
}