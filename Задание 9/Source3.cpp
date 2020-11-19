#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int K, N, c;
	printf("Введите день года: ");
	scanf_s("%i", &K);
	printf("Введите номер дня недели 1 января: ");
	scanf_s("%i", &N);
	c = ((K + N - 2) % 7) + 1;
	printf("Номер дня недели: %i\n", c);
	return 0;
}