
#include <locale.h>
#include <stdio.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int a;
	int b;
	float del;
	printf("Введите число 1:");
	scanf("%d", &a);
	printf("Введите число 2:");
	scanf("%d", &b);
	del = (float)a / b;
	printf("+ = %d, - = %d, * = %d, / = %f", a + b, a - b, a * b, del);
	getchar();
}