#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float s, AC, BC, A, B, C;
	printf("¬ведите координату точки A:");
	scanf_s("%f", &A);
	printf("¬ведите координату точки B:");
	scanf_s("%f", &B);
	printf("¬ведите координату точки C:");
	scanf_s("%f", &C);
	AC = abs(A - B);
	BC = abs(B - C);
	s = AC + BC;
	printf("ƒлина отрезка AC равна: %f\n", AC);
	printf("ƒлина отрезка BC равна: %f\n", BC);
	printf("—умма отрезков AC и BC равна: %f\n", s);
	return 0;
}