#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "AllHW.h"

int main() {
	std::setlocale(0, "");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	srand(time(NULL));
	int choise = 1;
	while (choise > 0) {
		std::cout << "Выберите работу:" << std::endl;
		std::cout << "1. \"2.5 Практическая работа\"" << std::endl;
		std::cout << "2. \"3.5 Практическая работа\"" << std::endl;
		std::cout << "3. \"4.4 Практическая работа\"" << std::endl;
		std::cout << "4. \"5.6 Практическая работа\"" << std::endl;
		std::cout << "0. Выход" << std::endl;

		std::cin >> choise;

		switch (choise)
		{
		case 1: {
			system("cls");
			HW2();
			system("pause");
			system("cls");
			break;
		};
		case 2: {
			system("cls");
			HW3();
			system("pause");
			system("cls");
			break;
		};
		case 3: {
			system("cls");
			HW4();
			system("pause");
			system("cls");
			break;
		};
		case 4: {
			system("cls");
			HW5();
			system("pause");
			system("cls");
			break;
		};
		default:
			choise = 0;
		}
	}
}