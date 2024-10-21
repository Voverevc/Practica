#include <stdio.h>
#include <locale.h>
#include <math.h>

//Задание1
void task1()
{
	setlocale(LC_ALL, "rus");
	int yeas;
	puts("Введите год\n");
	scanf("%d", &yeas);

	if (((yeas % 4 == 0) && (yeas % 100 != 0)) || (yeas % 400 == 0)) {
		printf("Год %d високосный", yeas);
	}
	else {
		printf("Год %d не високосный", yeas);
	}
	getchar();
}

//Задание2
int res1(int x)
{
	int res11;
	res11 = -pow(x, 2) + 3 * x + 9;
	return res11;
}
float res2(int x)
{
	float res22;
	res22 = x / (pow(x, 3) - 6);
	return res22;
}
int res()
{
	//при х=3, f(х)= 9 и 0,142857

	setlocale(LC_ALL, "rus");
	int x;
	puts("\n\nВведите цисло\n");
	scanf("%d", &x);
	int res11 = res1(x);
	float res22 = res2(x);

	printf("при x = %d, f(x) = %d и %f", x, res11, res22);
	getchar();
}
//Задание 3
void task3()
{
	setlocale(LC_ALL, "rus");
	int n;
	puts("\n\nВведите число\n");
	scanf("%d", &n);
	if (n / 100 > 0) {
		printf("Первое число = %d, последнее = %d", n / 100, n % 10);
	}
	else {
		printf("Первое число = %d, последнее = %d", n / 10, n % 10);
	}
	getchar();
}

//Домашнее задание
void hw()
{

}


void main()
{
	task1();
	res();
	task3();
}