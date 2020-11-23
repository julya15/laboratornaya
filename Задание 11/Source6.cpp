#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf("Введите x: ");
	scanf_s("%i", &x);
	if (x % 2 == 0)
		printf("Чётное ");
	else
		printf("Нечётное ");
	if (x > 99)
		printf("трёхзначное число");
	else if ((x < 100) & (x > 9))
		printf("двухзначное число");
	else
		printf("однозначное число");
	return 0;
}