#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int a;
	int b;
	printf("������� ������ �����:");
	scanf("%d", &a);
	printf("������� ������ �����:");
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