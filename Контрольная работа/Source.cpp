#include <stdio.h>
#include <iostream>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "");

	int a;

	printf("����� �� ������ ������� ����������������? \n");
	printf("1 - ��� ����� \n");
	printf("2 - � �� ����, �������� �� ���� \n");
	printf("3 - ������������ \n");
	printf("4 - ��������� \n");
	printf("5 - ������������ \n");
	printf("6 - ���������� \n");
	scanf_s("%d", &a);

	if (a == 1)
		printf("������� �� Scratch, �����... -> Python \n");

	else if (a == 2)
		printf("Python \n");

	else if (a == 3 || a == 4 || a == 5) {
		int b;
		printf("��� ���� ���� �� �������? \n");
		printf("1 - �� \n");
		printf("0 - ���, ������ ���� ������ \n");
		scanf_s("%d", &b);
		if (b == 0) {
			int c;
			printf("��� �������� �������: \n");
			printf("1 - ������� �������� \n");
			printf("2 - ������ �������� \n");
			printf("3 - ����������� �������� \n");
			printf("4 - ����� ������� ���� (�� ����� ����� �����) \n");
			scanf_s("%d", &c);
			if (c == 1)
				printf("Python \n");
			else if (c == 2)
				printf("Python \n");
			else if (c == 3) {
				int d;
				printf("����� ������� �������? ");
				printf("1 - ������� \n");
				printf("2 - ������ \n");
				scanf_s("%d", &d);
				if (d == 1)
					printf("JAVA \n");
				else if (d == 2)
					printf("�� \n");
			}
			else if (c == 4)
				printf("C++ \n");
		}
		else if (b == 1) {
			int f;
			printf("����� ���������/�����? ");
			printf("1 - 3d/���� \n");
			printf("2 - ��������� \n");
			printf("3 - ����. ���� \n");
			printf("4 - ��� \n");
			scanf_s("%d", &f);
			if (f == 1)
				printf("C++ \n");
			else if (f == 2) {
				int g;
				printf("����� �S? \n");
				printf("1 - iOS \n");
				printf("2 - Android \n");
				scanf_s("%d", &g);
				if (g == 1)
					printf("OBJECTIV - C \n");
				else if (g == 2)
					printf("JAVA \n");
			}
			else if (f == 3) {
				int h;
				printf("��� ������� � Microsoft? \n");
				printf("1 - ����� ��� \n");
				printf("2 - ������� \n");
				printf("3 - ����� \n");
				scanf_s("%d", &h);
				if (h == 1)
					printf("C# \n");
				else if (h == 2 || h == 3)
					printf("JAVA \n");
			}
			else if (f == 4) {
				int i;
				printf("��� ������ ����� �������� � �������� �������, ��� twitter? \n");
				printf("1 - �� \n");
				printf("2 - ��� \n");
				scanf_s("%d", &i);
				if (i = 1)
					printf("JavaScript \n");
				else if (i == 2) {
					int j;
					printf("������ ����������� ���-�� �����, �� �� ����� ���������? \n");
					printf("1 - �� ���� \n");
					printf("2 - ��� \n");
					scanf_s("%d", &j);
					printf("����� � ��� ������� �������? \n");
					printf("1 - Lego \n");
					printf("2 - ��������� \n");
					printf("3 - ����������, �� ������� ����� \n");
					scanf_s("%d", &j);
					if (j == 1)
						printf("PYTHON \n");
					else if (j == 2)
						printf("RUBY \n");
					else if (j == 3)
						printf("PHP \n");
				}
			}
		}
	}

	else if (a == 6) {
		int l;
		printf("1 - ����� ������ \n");
		printf("2 - � ���� ���� ���� ��� ��������! \n");
		scanf_s("%d", &l);
		if (l == 1) {
			int m;
			printf("����� ������ \n");
			printf("����� ���������/�����? \n");
			printf("1 - � ���� �������� � ������� IT - �������� \n");
			printf("2 - � ������ ���� $$$ \n");
			printf("3 - ��� \n");
			printf("4 - ����. ���� \n");
			printf("5 - ��������� \n");
			printf("6 - 3d/���� \n");
			scanf_s("%d", &m);
			if (m == 1) {
				int n;
				printf("1 - Facebook \n");
				printf("2 - Windows \n");
				printf("3 - Google \n");
				printf("4 - Apple \n");
				scanf_s("%d", &n);
				if (n == 1)
					printf("PYTHON \n");
				else if (n == 2)
					printf("C# \n");
				else if (n == 3)
					printf("PYTHON \n");
				else if (n == 4)
					printf("OBJECTIVE - C \n");
			}
			else if (m == 2)
				printf("JAVA \n");
			else if (m == 3) {
				int o;
				printf("1 - �������� (���-��������) \n");
				printf("2 - ������ (��, ��� �� ���������) \n");
				scanf_s("%d", &o);
				if (o == 1)
					printf("JAVASCRIPT \n");
				else if (o == 2) {
					int p;
					printf("� ���� �������� ��... \n");
					printf("1 - ���������� \n");
					printf("2 - ������� \n");
					scanf_s("%d", &p);
					if (p == 1) {
						int q;
						printf("��� ������� � Microsoft? \n");
						printf("1 - ����� ��� \n");
						printf("2 - ������� \n");
						printf("3 - ����� \n");
						scanf_s("%d", &q);
						if (q == 1)
							printf("C# \n");
						else if (q == 2 || q == 3)
							printf("JAVA \n");
					}
					else if (p == 2) {
						int j;
						printf("������ ����������� ���-�� �����, �� �� ����� ���������? \n");
						printf("1 - �� ���� \n");
						printf("2 - ��� \n");
						scanf_s("%d", &j);
						printf("����� � ��� ������� �������? \n");
						printf("1 - Lego \n");
						printf("2 - ��������� \n");
						printf("3 - ����������, �� ������� ����� \n");
						scanf_s("%d", &j);
						if (j == 1)
							printf("PYTHON \n");
						else if (j == 2)
							printf("RUBY \n");
						else if (j == 3)
							printf("PHP \n");
					}
				}
			}
			else if (m == 4) {
				int q;
				printf("��� ������� � Microsoft? \n");
				printf("1 - ����� ��� \n");
				printf("2 - ������� \n");
				printf("3 - ����� \n");
				scanf_s("%d", &q);
				if (q == 1)
					printf("C# \n");
				else if (q == 2 || q == 3)
					printf("JAVA \n");
			}
			else if (m == 5) {
				int z;
				printf("����� OS? \n");
				printf("1 - iOs \n");
				printf("2 - Android \n");
				scanf_s("%d", &z);
				if (z == 1)
					printf("OBJECTIV - C \n");
				else if (z == 2)
					printf("JAVA \n");
			}
			else if (m == 6) {
				printf("C++ \n");
			}
		}

	}

	system("pause");
}