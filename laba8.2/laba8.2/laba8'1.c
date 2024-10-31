#include <stdio.h>
#include <locale.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
double f(double x) {
    return pow(x, 3) + 3 * pow(x, 2) - 3;
}

// Функция для вывода заголовка таблицы
void table() {
    printf("______________\n");
    printf("|  x  |   f(x)   |\n");
    printf("______________\n");
}

void tabulateFunction(double step) {
    double x;
    for (x = 2; x <= 4; x += step) {
        printf("| %.2f | %.2f |\n", x, f(x)); 
    }
    printf("______________\n");
}

int main() {
    double step;
    setlocale(LC_ALL, "RUS");
    printf("Вычисляемая функция: y = x^3 + 3*x^2 - 3\n");
    printf("Введите значение шага табуляции: ");
    scanf("%lf", &step);
    table();
    tabulateFunction(step);
    return 0;
}
