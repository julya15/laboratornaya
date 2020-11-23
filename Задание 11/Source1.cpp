#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	float A, B, k;
	printf("¬ведите A: ");
	scanf_s("%f", &A);
	printf("¬ведите B: ");
	scanf_s("%f", &B);
	if ((A > B) | (A < B)) {
		if (A > B)
			k = A;
		else
			k = B;
		A = B = k;
	}
	else {
		A = 0;
		B = 0;
	}
	printf("A = %f\n", A);
	printf("B = %f\n", B);
	return 0;
}