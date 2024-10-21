#include<locale.h>
#include<stdio.h>
#pragma warning(disable :4996)
#include<math.h>
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846
#define k -4
double rad(double gr) {
	return sin(gr * M_PI / 180);
}

int main(){
	setlocale(LC_ALL, "RUS");
	double gr;
	printf("Введите граудс:");
	scanf("%if", &gr);
	double radios = rad(gr);
	printf("Ответ:%.6lf градус\n", radios);
	//  2
	float x, y, a, b;
	printf("Введите x:");
	scanf("%if", &x);
	a = log(-1 * k * x);
	b = exp(2 * x) + (a * x);
	y = x * (a * a * a) + (b * b);
	printf("Вывод y=%.1lf\n", y);
	printf("Ответ a=%f b=%f %.1lf\n", a, b);
	//  3
	int A = a, B = b, C = y;
	printf("условие A выполнено  %d\n", A % 2 == 0 + B % 2 == 0);
	printf("условие B выполнено  %d\n\n", A % 3 == 0 && B % 3 == 0 && C % 3 == 0);

}

