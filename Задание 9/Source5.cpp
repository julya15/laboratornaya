#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int A, k;
	printf("Введите год: ");
	scanf_s("%i", &A);
	k = ((A - 1) / 100) + 1;
	printf("Номер столетия равен: %i\n", k);
	return 0;
}