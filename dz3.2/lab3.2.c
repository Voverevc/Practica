#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define D 2.54
#define K 2.32166
#define C 2.7076
int main()
{
	setlocale(LC_ALL, "RUS");
	int dym;
	printf("Длина:");
	scanf("%d", &dym);
	float result = D * (float)dym;
	printf("%.1f cm\n", result);
	float resultS = K * (float)dym;
	printf("%.1f cm\n", resultS);
	float resultSt = C * (float)dym;
	printf("%.1f cm\n", resultSt);
	getchar();
}