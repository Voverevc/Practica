#include <stdio.h>
#include <locale.h>
#pragma warning(disable :4996)
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{

	setlocale(LC_ALL, "RUS");
	char c;
	int i;
	float f;
	double d;
	printf("Введите знак, целое число, дробное f и дробное дабл:\n");
	scanf("%c%d%f%lf", &c, &i, &f, &d);
	printf("Знак %c, целое %d, дробное %f, дабл %lf\n", c, i, f, d);
	printf("Целая %d, дробная %.3f\n", (int)f, f - (int)f);
	printf("В шестандцатиричной %x, в десятичной %d\n", i, i);
	printf("1 / %d = %f\n", i, 1 / (float)i);

	//  2

	int a = 11;
	int b = 3;
	printf("инт %d\nфлоат %f\nдабл %lf\n", (int)a / b, (float)a / b, (double)a / b);

	// 3

	int n;
	printf("Число");
	scanf("%d", &n);
	printf("Наоборот %d%d%d\n", n % 10, (n % 100) / 10, n / 100);
}