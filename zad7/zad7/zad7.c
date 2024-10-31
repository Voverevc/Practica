#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

void getInput(int* year);
void DayOfWeek(int year, int* day_of_week, char** day_name);

int main() {
    setlocale(LC_ALL, "RUS");
    int year;
    int day_of_week;
    char* day_name;

    getInput(&year);
    DayOfWeek(year, &day_of_week, &day_name);

    printf("1 сентября %d года - это %s.\n", year, day_name);

    return 0;
}

void getInput(int* year) {
    printf("Введите год XXI века (2001-2100): ");
    scanf("%d", year);
}

void DayOfWeek(int year, int* day_of_week, char** day_name) {
    int month = 9, day = 1; 

    month = month < 3 ? month + 12 : month;
    year = month < 3 ? year - 1 : year;

   
    int k = year % 100; 
    int j = year / 100; 
    int f = day + (13 * (month + 1)) / 5 + k + k / 4 + j / 4 + 5 * j;

    
    *day_of_week = f % 7; 

    *day_name = (*day_of_week == 0) ? "Воскресенье"
        : (*day_of_week == 1) ? "Понедельник"
        : (*day_of_week == 2) ? "Вторник"
        : (*day_of_week == 3) ? "Среда"
        : (*day_of_week == 4) ? "Четверг"
        : (*day_of_week == 5) ? "Пятница"
        : "Суббота";
}
