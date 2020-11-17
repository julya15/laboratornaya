#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	printf("Введите количество байт: ");
	scanf_s("%i", &a);
	b = a / 1024;
	printf("количество килобайт равно: %i\n", b);
	return 0;
}