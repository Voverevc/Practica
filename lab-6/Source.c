#include <stdio.h>
#include <locale.h>
#include <math.h>

//�������1
void task1()
{
	setlocale(LC_ALL, "rus");
	int yeas;
	puts("������� ���\n");
	scanf("%d", &yeas);

	if (((yeas % 4 == 0) && (yeas % 100 != 0)) || (yeas % 400 == 0)) {
		printf("��� %d ����������", yeas);
	}
	else {
		printf("��� %d �� ����������", yeas);
	}
	getchar();
}

//�������2
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
	//��� �=3, f(�)= 9 � 0,142857

	setlocale(LC_ALL, "rus");
	int x;
	puts("\n\n������� �����\n");
	scanf("%d", &x);
	int res11 = res1(x);
	float res22 = res2(x);

	printf("��� x = %d, f(x) = %d � %f", x, res11, res22);
	getchar();
}
//������� 3
void task3()
{
	setlocale(LC_ALL, "rus");
	int n;
	puts("\n\n������� �����\n");
	scanf("%d", &n);
	if (n / 100 > 0) {
		printf("������ ����� = %d, ��������� = %d", n / 100, n % 10);
	}
	else {
		printf("������ ����� = %d, ��������� = %d", n / 10, n % 10);
	}
	getchar();
}

//�������� �������
void hw()
{

}


void main()
{
	task1();
	res();
	task3();
}