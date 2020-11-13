#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float p, A, R;
	printf("¬ведите значение угла альфа в градусах (0 < а < 360): ");
	scanf_s("%f", &A);
	p = 3.14;
	R = p * A / 180;
	printf("”гол альфа в радианах равен: %f\n", R);
	return 0;
}