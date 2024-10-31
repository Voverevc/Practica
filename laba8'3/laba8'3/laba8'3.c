#include <stdio.h>
#include <math.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

double f(double x) {
    return pow(x, 3) + 3 * pow(x, 2) - 3;
}

int main() {
    double step;
    double x;
    setlocale(LC_ALL, "RUS");

    printf("Вычисляемая функция: y = x^3 + 3*x^2 - 3\n");

 
    printf("Введите значение шага табуляции: ");
    scanf("%lf", &step);


    printf("______________\n");
    printf("|  x  |   f(x)   |\n");
    printf("______________\n");

   
    for (x = 2; x <= 4; x += step) {
        printf("| %.2f | %.2f |\n", x, f(x)); 
    }

    printf("______________\n");

    return 0;
}
