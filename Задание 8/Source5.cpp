#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int A, c;
	printf("Введите трехзначное число: ");
	scanf_s("%i", &A);
	c = (A - (A / 100) * 100) * 10 + (A / 100);
	printf("Полученное число %i\n", c);
	return 0;
}