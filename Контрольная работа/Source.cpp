#include <stdio.h>
#include <iostream>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "");

	int a;

	printf("Зачем вы хотите изучать программирование? \n");
	printf("1 - Для детей \n");
	printf("2 - Я не знаю, выберите за меня \n");
	printf("3 - Поразвлечься \n");
	printf("4 - Интересно \n");
	printf("5 - Саморазвитие \n");
	printf("6 - Заработать \n");
	scanf_s("%d", &a);

	if (a == 1)
		printf("Начните со Scratch, затем... -> Python \n");

	else if (a == 2)
		printf("Python \n");

	else if (a == 3 || a == 4 || a == 5) {
		int b;
		printf("Уже есть идея на миллион? \n");
		printf("1 - Да \n");
		printf("0 - Нет, просто хочу начать \n");
		scanf_s("%d", &b);
		if (b == 0) {
			int c;
			printf("Мне нравится учиться: \n");
			printf("1 - Простым способом \n");
			printf("2 - Лучшим способом \n");
			printf("3 - Трудненьким способом \n");
			printf("4 - Очень сложный путь (но потом будет легче) \n");
			scanf_s("%d", &c);
			if (c == 1)
				printf("Python \n");
			else if (c == 2)
				printf("Python \n");
			else if (c == 3) {
				int d;
				printf("Какая коробка передач? ");
				printf("1 - Автомат \n");
				printf("2 - Ручная \n");
				scanf_s("%d", &d);
				if (d == 1)
					printf("JAVA \n");
				else if (d == 2)
					printf("СИ \n");
			}
			else if (c == 4)
				printf("C++ \n");
		}
		else if (b == 1) {
			int f;
			printf("Какая платформа/сфера? ");
			printf("1 - 3d/игры \n");
			printf("2 - Мобильная \n");
			printf("3 - Корп. софт \n");
			printf("4 - Веб \n");
			scanf_s("%d", &f);
			if (f == 1)
				printf("C++ \n");
			else if (f == 2) {
				int g;
				printf("Какая ОS? \n");
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
				printf("Что скажете о Microsoft? \n");
				printf("1 - Люблю его \n");
				printf("2 - Неплохо \n");
				printf("3 - Фуууу \n");
				scanf_s("%d", &h);
				if (h == 1)
					printf("C# \n");
				else if (h == 2 || h == 3)
					printf("JAVA \n");
			}
			else if (f == 4) {
				int i;
				printf("Ваш сервис будет работать в реальном времени, как twitter? \n");
				printf("1 - Да \n");
				printf("2 - Нет \n");
				scanf_s("%d", &i);
				if (i = 1)
					printf("JavaScript \n");
				else if (i == 2) {
					int j;
					printf("Хотите попробовать что-то новое, но не очень трудоёмкое? \n");
					printf("1 - Не знаю \n");
					printf("2 - Нет \n");
					scanf_s("%d", &j);
					printf("Какая у вас любимая игрушка? \n");
					printf("1 - Lego \n");
					printf("2 - Пластилин \n");
					printf("3 - Старенький, но любимый мишка \n");
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
		printf("1 - Найти работу \n");
		printf("2 - У меня есть идея для стартапа! \n");
		scanf_s("%d", &l);
		if (l == 1) {
			int m;
			printf("Найти работу \n");
			printf("Какая платформа/сфера? \n");
			printf("1 - Я хочу работать в крупной IT - компании \n");
			printf("2 - Я просто хочу $$$ \n");
			printf("3 - Веб \n");
			printf("4 - Корп. софт \n");
			printf("5 - Мобильная \n");
			printf("6 - 3d/Игры \n");
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
				printf("1 - Фронтенд (веб-интерфес) \n");
				printf("2 - Бэкенд (то, что за вебсайтом) \n");
				scanf_s("%d", &o);
				if (o == 1)
					printf("JAVASCRIPT \n");
				else if (o == 2) {
					int p;
					printf("Я хочу работать на... \n");
					printf("1 - Корпорацию \n");
					printf("2 - Стартап \n");
					scanf_s("%d", &p);
					if (p == 1) {
						int q;
						printf("Что скажете о Microsoft? \n");
						printf("1 - Люблю его \n");
						printf("2 - Неплохо \n");
						printf("3 - Фуууу \n");
						scanf_s("%d", &q);
						if (q == 1)
							printf("C# \n");
						else if (q == 2 || q == 3)
							printf("JAVA \n");
					}
					else if (p == 2) {
						int j;
						printf("Хотите попробовать что-то новое, но не очень трудоёмкое? \n");
						printf("1 - Не знаю \n");
						printf("2 - Нет \n");
						scanf_s("%d", &j);
						printf("Какая у вас любимая игрушка? \n");
						printf("1 - Lego \n");
						printf("2 - Пластилин \n");
						printf("3 - Старенький, но любимый мишка \n");
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
				printf("Что скажете о Microsoft? \n");
				printf("1 - Люблю его \n");
				printf("2 - Неплохо \n");
				printf("3 - Фуууу \n");
				scanf_s("%d", &q);
				if (q == 1)
					printf("C# \n");
				else if (q == 2 || q == 3)
					printf("JAVA \n");
			}
			else if (m == 5) {
				int z;
				printf("Какая OS? \n");
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