#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

//2������� 


char inputChar() {
	char c;
	printf("������� ������: ");
	scanf(" %c", &c); 
	return c;
}


void cifra(char c) {
	if (c >= '0' && c <= '9') {
		printf("��� �����.\n");
	}
	else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
		printf("��� �����.\n");
	}
	else {
		printf("����������� ������.\n");
	}
}

int main() {
	setlocale(LC_ALL, "RUS");
	char c = inputChar(); 
	cifra(c);    

	return 0;
}
