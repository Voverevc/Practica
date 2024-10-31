#include <stdio.h>
#include <math.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

double sum(int n, double x) {
    double sum = 0; 
    for (int i = 1; i <= n; i++) {
        sum += cos(pow(x, i)); 
    }
    return sum; 
}

int main() {
    setlocale(LC_ALL, "RUS");
    int n;         
    double x;      

    
    printf("������� ����������� ����� n: ");
    scanf("%d", &n);
    printf("������� �������������� ����� x: ");
    scanf("%lf", &x);

    // ���������� �����
    double result = sum(n, x); 

    // ����� ����������
    printf("���������: %.4f\n", result); 

    return 0;
}
