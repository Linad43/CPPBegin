#include <stdio.h>
#include <iostream>

void ex1() {
	double a, b;
	std::cout << "������� ������ �����:" << std::endl;
	std::cin >> a;
	std::cout << "������� ������ �����:" << std::endl;
	std::cin >> b;

	if (a > b) {
		std::cout << "������ ����� ������: " << b << std::endl;
	}
	else if (b > a) {
		std::cout << "������ ����� ������: " << a << std::endl;
	}
	else {
		std::cout << "���� �����: " << a << std::endl;
	}
}
void ex2() {
	double a, b, sum;
	std::cout << "������� ������ �����:" << std::endl;
	std::cin >> a;
	std::cout << "������� ������ �����:" << std::endl;
	std::cin >> b;
	std::cout << "������� �� �����:" << std::endl;
	std::cin >> sum;
	if (sum == a + b) {
		std::cout << "�����!" << std::endl;
	}
	else {
		std::cout << "������, ������ ���������: " << a + b << std::endl;
	}
}
void ex3() {
	int a;
	std::cout << "������� �����: " << std::endl;
	std::cin >> a;
	if (a % 2 == 0) {
		std::cout << "����� " << a << " - ������" << std::endl;
	}
	else {
		std::cout << "����� " << a << " - ��������" << std::endl;
	}
}
void ex4() {
	double exp;
	std::cout << "������� ����� ����� �����: " << std::endl;
	std::cin >> exp;
	if (exp < 0) {
		std::cout << "������ �����, ���� �� ����� ���� �������������!" << std::endl;
	}
	else if (exp >= 0 && exp < 1000) {
		std::cout << "��� �������: 1" << std::endl;
	}
	else if (exp >= 1000 && exp < 2500) {
		std::cout << "��� �������: 2" << std::endl;
	}
	else if (exp >= 2500 && exp < 5000) {
		std::cout << "��� �������: 3" << std::endl;
	}
	else {
		std::cout << "��� �������: 4" << std::endl;
	}
}
void ex5() {
	int a, b;
	std::cout << "������� ������ �����:" << std::endl;
	std::cin >> a;
	std::cout << "������� ������ �����:" << std::endl;
	std::cin >> b;
	if (a % b == 0) {
		std::cout << "��! ������ ����� " << a << " ������� �� ������ " << b << " ��� �������" << std::endl;
	}
	else {
		std::cout << "���! ������ ����� " << a << " �� ������� �� ������ " << b << " ��� �������" << std::endl;
	}
}
void ex6() {
	int mansCount;
	int barbersCount;

	std::cout << "***���������-�����������***" << std::endl;
	std::cout << "������� ����� ������ � ������: " << std::endl;
	std::cin >> mansCount;

	std::cout << "������� ��� �������� ������� ������?" << std::endl;
	std::cin >> barbersCount;

	int mansPerDay = mansCount / 30;
	int mansPerBarber = 8;
	int mansPerBarbePerMonth = mansPerBarber * 30;
	std::cout << "���� ������ ������� " << mansPerBarbePerMonth << " � �����" << std::endl;
	int requiredBarberCount = mansCount / mansPerBarbePerMonth;
	if (mansCount % mansPerBarbePerMonth != 0) {
		requiredBarberCount++;
	}
	std::cout << "����������� ����� ��������: " << requiredBarberCount << std::endl;

	std::cout << requiredBarberCount << " ������� ����� �������� " <<
		requiredBarberCount * mansPerBarbePerMonth << " ������ �� �����" << std::endl;
	if (requiredBarberCount > barbersCount) {
		std::cout << "����� ������ ��������!!!" << std::endl;
	}
	else {
		std::cout << "�������� �������." << std::endl;
	}
}
void ex7() {
	int day;
	std::cout << "������� ���� ������ (1-7): " << std::endl;
	std::cin >> day;
	switch (day)
	{
	case 1: {
		std::cout << "���� ������� ";
		std::cout << "(�����������):" << std::endl;
		std::cout << "������� � ������� ���� � ������ ������" << std::endl;
		std::cout << "����������� � ��������� ����� � ��� � �������" << std::endl;
		std::cout << "����� � ������� �������, ���������� ���������� � ������ ��-����������" << std::endl;
		std::cout << "������� �� ������ � ������� � ��������� �������" << std::endl;
		break;
	}
	case 2: {
		std::cout << "���� ������� ";
		std::cout << "(�������):" << std::endl;
		std::cout << "������� � ���������� ������" << std::endl;
		std::cout << "������� ������� �� ����� � ����" << std::endl;
		std::cout << "�������� � ������ � ��������" << std::endl;
		std::cout << "��� � �������" << std::endl;
		break;
	}
	case 3: {
		std::cout << "���� ������� ";
		std::cout << "(�����):" << std::endl;
		std::cout << "������� ���� � �������-���������� ����������" << std::endl;
		std::cout << "������ ����-��� � ��������" << std::endl;
		std::cout << "������� � ����� � ��������" << std::endl;
		std::cout << "������� ������� � ������� � ��������� ����� � ���" << std::endl;
		break;
	}
	case 4: {
		std::cout << "���� ������� ";
		std::cout << "(�������):" << std::endl;
		std::cout << "��������� ������� � ����� � ����������� ������" << std::endl;
		std::cout << "���� �� �������� � ��������� ����" << std::endl;
		std::cout << "���� ��-�����������" << std::endl;
		std::cout << "��������� �������� � ������ ��� �����-��������� ������" << std::endl;
		break;
	}
	case 5: {
		std::cout << "���� ������� ";
		std::cout << "(�������):" << std::endl;
		std::cout << "����� � ��������" << std::endl;
		std::cout << "������� �� ������ � ������� � ��������" << std::endl;
		std::cout << "������� � ��������� ���������� � ��������� ������" << std::endl;
		std::cout << "������� ������� � ��������-������� ����� � ������" << std::endl;
		break;
	}
	case 6: {
		std::cout << "���� ������� ";
		std::cout << "(�������):" << std::endl;
		std::cout << "���������� ���� � ������������������� �������" << std::endl;
		std::cout << "����� �� ��������� ����� � ������" << std::endl;
		std::cout << "����� � �������, ����� � ��������� ������" << std::endl;
		std::cout << "������ ��������� � ������� �������� � ����" << std::endl;
		break;
	}
	case 7: {
		std::cout << "���� ������� ";
		std::cout << "(�����������):" << std::endl;
		std::cout << "��������� ������� � ����� � ����������� ������" << std::endl;
		std::cout << "���� �� �������� � ��������� ����" << std::endl;
		std::cout << "���� ��-�����������" << std::endl;
		std::cout << "��������� �������� � ������ ��� �����-��������� ������" << std::endl;
		break;
	}
	default:
		std::cout << "������ �����" << std::endl;
		break;
	}
}
void ex8() {
	int salary[3];
	std::cout << "������� �������� ������� ����������: " << std::endl;
	std::cin >> salary[0];
	std::cout << "������� �������� ������� ����������: " << std::endl;
	std::cin >> salary[1];
	std::cout << "������� �������� �������� ����������: " << std::endl;
	std::cin >> salary[2];
	int max = salary[0];
	int min = max;
	int sum = 0;
	for (int i = 0; i < std::size(salary); i++) {
		if (salary[i] > max) {
			max = salary[i];
		}
		if (salary[i] < min) {
			min = salary[i];
		}
		sum += salary[i];
	}
	std::cout << "����� ������� �������� " << max << std::endl;
	std::cout << "������� ����� ����� ������� ��������� � ����� ������: " << max - min << std::endl;
	std::cout << "������� �������� " << ((double)sum) / 3 << std::endl;
}
void ex9() {
	int salary;
	double tax = 0;
	std::cout << "������� ��������: " << std::endl;
	std::cin >> salary;
	if (salary < 0) {
		std::cout << "������ ����� " << std::endl;
	}
	else {
		int buf = salary;
		if (buf > 50000) {
			tax += 0.3 * (buf - 50000);
			buf = 50000;
		}
		if (buf > 10000) {
			tax += 0.2 * (buf - 10000);
			buf = 10000;
		}
		if (buf <= 10000) {
			tax += 0.13 * (buf);
		}
	}
	std::cout << "����� ������: " << tax << std::endl;
}

void HW4() {
	//������� �� ���� �����
	int choise = 1;
	while (choise > 0) {
		std::cout << "4.4 ������������ ������" << std::endl;
		std::cout << "�������� �������:" << std::endl;
		std::cout << "1. ������� �� ���� �����" << std::endl;
		std::cout << "2. ���������� � ���" << std::endl;
		std::cout << "3. �������� �� ������ �����" << std::endl;
		std::cout << "4. ����������� �����" << std::endl;
		std::cout << "5. ��������� �����" << std::endl;
		std::cout << "6. ������� ��������" << std::endl;
		std::cout << "7. ���� ���������" << std::endl;
		std::cout << "8. ��������" << std::endl;
		std::cout << "9. ������������ �����" << std::endl << std::endl;
		std::cout << "0. �����" << std::endl;

		std::cin >> choise;

		switch (choise)
		{
		case 1: {
			ex1();
			system("pause");
			system("cls");
			break;
		};
		case 2: {
			ex2();
			system("pause");
			system("cls");
			break;
		};
		case 3: {
			ex3();
			system("pause");
			system("cls");
			break;
		};
		case 4: {
			ex4();
			system("pause");
			system("cls");
			break;
		};
		case 5: {
			ex5();
			system("pause");
			system("cls");
			break;
		};
		case 6: {
			ex6();
			system("pause");
			system("cls");
			break;
		};
		case 7: {
			ex7();
			system("pause");
			system("cls");
			break;
		};
		case 8: {
			ex8();
			system("pause");
			system("cls");
			break;
		};
		case 9: {
			ex9();
			system("pause");
			system("cls");
			break;
		};
		default:
			choise = 0;
		}
	}
}
