#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int A, B, c;
	printf("¬ведите длинну отрезка A: ");
	scanf_s("%i", &A);
	printf("¬ведите длинну отрезка B: ");
	scanf_s("%i", &B);
	c = A % B;
	printf("ƒлина незан€той части равна %i\n", c);
	return 0;
}