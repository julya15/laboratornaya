#include <math.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	printf("¬ведите x: ");
	scanf_s("%i", &x);
	printf("¬ведите y: ");
	scanf_s("%i", &y);
	if ((x > 0) & (y > 0))
		printf("I четверть");
	else
		if ((x < 0) & (y > 0))
			printf("II четверть");
		else
			if ((x < 0) & (y < 0))
				printf("III четверть");
			else printf("IV четверть");
	return 0;
}