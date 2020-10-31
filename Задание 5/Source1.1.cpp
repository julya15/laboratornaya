#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float x1, y1, x2, y2, s;
	printf("¬ведите координаты первой точки через пробел: ");
	scanf_s("%f %f", &x1, &y1);
	printf("¬ведите координаты второй точки через пробел: ");
	scanf_s("%f %f", &x2, &y2);
	s = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	printf("–ассто€ние между точками равно: %f\n", s);
	return 0;
}