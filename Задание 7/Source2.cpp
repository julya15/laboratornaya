#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float p, A, R;
	printf("¬ведите значение угла альфа в радианах (0 < а < 2пи): ");
	scanf_s("%f", &A);
	p = 3.14;
	R = 180 * A / p;
	printf("”гол альфа в градусах равен: %f\n", R);
	return 0;
}