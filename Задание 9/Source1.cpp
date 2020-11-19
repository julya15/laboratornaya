#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int N, c;
	printf("Введите количество секунд: ");
	scanf_s("%i", &N);
	c = N % 60;
	printf("Количество секунд равно %i\n", c);
	return 0;
}