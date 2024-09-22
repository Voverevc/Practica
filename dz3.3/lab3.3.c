#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int a;
	int b;
	printf("¬ведите первое число:");
	scanf("%d", &a);
	printf("¬ведите второе число:");
	scanf("%d", &b);
	printf(" _______________________\n");
	printf("|a * b\t|a + b\t|a - b\t|\n");
	printf(" _______________________\n");
	printf("|%d - %d\t|%d + %d\t|%d - %d\t|\n", a, b, a, b, a, b);
	printf(" _______________________\n");
	printf("| %d\t| %d\t| %d\t|\n", a * b, a + b, a - b);
	printf(" _______________________\n");

	return 0;
}