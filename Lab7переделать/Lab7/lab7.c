#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

//2задание 


int main() {
	setlocale(LC_ALL, "RUS");
	char c 	;    
	printf("Введите символ : ");
	scanf(" %c", &c);

	switch (c){
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		printf("Это цифра.\n");
		break;
	case 'a':
	case 'b':
	case 'c':
	case 'e':
	case 'f':
	case 'h':
	case 'i':
	case 'k':
	case 'l':
	case 'm':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':
	case 'n':
	case 'g':
	case 'B':
	case 'C':
	case 'D':
		printf("Это буква.\n");
		break;
	default:
		printf("Неизвестный символ.\n");
	}
	return 0;
}
