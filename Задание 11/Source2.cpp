#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int A, B, C, s;
	printf("¬ведите A: ");
	scanf_s("%i", &A);
	printf("¬ведите B: ");
	scanf_s("%i", &B);
	printf("¬ведите C: ");
	scanf_s("%i", &C);
	if ((A > C) & (B > C))
		s = A + B;
	else if ((A > B) & (C > B))
		s = A + C;
	else
		s = B + C;
	printf("—умма равна: %i", s);
	return 0;
}