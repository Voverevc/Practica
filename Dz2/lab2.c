#include <locale.h>
#include <stdio.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	printf("%20s\n", "��� �����");
	printf("\t");
	printf("0s\n", 12.234657);
	printf("������� �� ������� %d �� %d ����� %d\n ", 7, 5, 7 % 5);
	printf("��������� %d �� %d ����� %d\n", 2000, 4, 2000 * 4);
	printf("%g ��������� %e ����� %d\n", 5., 2., 5. / 2.);
	printf("%g ��������� %e ����� %f\n", 5., 2., 5. / 2.);
	printf("%g ��������� %e ����� %g\n", 5., 2., 5. / 2.);
	printf("%g ��������� %e ����� %e\n", 5., 2., 5. / 2.);
	int N = 20, K = 25;
	printf("������ %d ����� %d ����� 00 ������\n", N, K, "00");
	printf("��� %d �����\n, K");
	printf("�� �������� �������� %d ����� � %d �����\n", N, K);
	printf("� 8:00 ������ %d ������\n", (N - 8) * 3600 + K);
	printf("������� ��� = %f ����� � ������� ������ = %f ����\n\n", N / 24., K / 60.);
	printf("����:\n%12d\n%12d\n\t__________\n���������:\n\t%+03.3f", 3, 333, 3. / 333);
	getchar();
}
