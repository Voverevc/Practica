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
	printf("������� ����, ����� �����, ������� f � ������� ����:\n");
	scanf("%c%d%f%lf", &c, &i, &f, &d);
	printf("���� %c, ����� %d, ������� %f, ���� %lf\n", c, i, f, d);
	printf("����� %d, ������� %.3f\n", (int)f, f - (int)f);
	printf("� ����������������� %x, � ���������� %d\n", i, i);
	printf("1 / %d = %f\n", i, 1 / (float)i);

	//  2

	int a = 11;
	int b = 3;
	printf("��� %d\n����� %f\n���� %lf\n", (int)a / b, (float)a / b, (double)a / b);

	// 3

	int n;
	printf("�����");
	scanf("%d", &n);
	printf("�������� %d%d%d\n", n % 10, (n % 100) / 10, n / 100);
}