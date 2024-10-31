#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

void input(int* m, int* n) {
    printf("¬ведите значение m: ");
    scanf("%d", m);
    printf("¬ведите значение n: ");
    scanf("%d", n);
}


int Sum(int m, int n) {
    int s = 0; 
    int k = 0; 
    for (int i = m; i <= n; i++) {
        s += i;
        printf("выполнено %d раз\n", k++);
    }

    return s; 
}


int main() {
    setlocale(LC_ALL, "RUS");
    int m, n;

    input(&m, &n);

    int result = Sum(m, n);

    printf("результат %d\n", result);

    return 0;
}



