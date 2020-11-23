#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf("Введите x: ");
	scanf_s("%i", &x);
	if (x == 0)
		printf("Нулевое число");
	else {
		if (x > 0)
			printf("Положительное ");
		else printf("Отрицательное ");
		if (x % 2 == 0)
			printf("четное число");
		else printf("нечетное число");
	}
	return 0;
}