#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

//2задание 


char inputChar() {
	char c;
	printf("Введите символ: ");
	scanf(" %c", &c); 
	return c;
}


void cifra(char c) {
	if (c >= '0' && c <= '9') {
		printf("Это цифра.\n");
	}
	else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
		printf("Это буква.\n");
	}
	else {
		printf("Неизвестный символ.\n");
	}
}

int main() {
	setlocale(LC_ALL, "RUS");
	char c = inputChar(); 
	cifra(c);    

	return 0;
}
