#include<stdio.h>
#include<locale.h>
#pragma warning(disable :4996)
double time_past(double L1, double L2, double V1, double V2) {
	return(L1 + L2) / (V1 + V2);
}

int main() {
	setlocale(LC_ALL, "RUS");
	double L1, L2, V1, V2;
	printf("������� �����1 L1:");
	scanf("%if", &L1);
	printf("������� �����2 L2:");
	scanf("%if", &L2);
	printf("������� ���������1 V1:");
	scanf("%if", &V1);
	printf("������� ��������2 V2:");
	scanf("%if", &V2);
	double time = time_past(L1, L2, V1, V2);
	printf("����� ����������� ������: %.2f ������\n", time);
	return 0;
}