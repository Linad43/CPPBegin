#include <iostream>


void ex1HW5() {
	std::cout << "1. ����� ����������" << std::endl;
	int speed, height;
	std::cout << "������� �������� ������" << std::endl;
	std::cin >> speed;
	std::cout << "������� ������ ������" << std::endl;
	std::cin >> height;
	if (speed >= 750 && speed <= 850 && height >= 9000 && height <= 9500) {
		std::cout << "����� ����������" << std::endl;
	}
	else {
		std::cout << "���������� ������������� ������" << std::endl;
	}
}
void ex2HW5() {
	std::cout << "2. �������!" << std::endl;
	std::cout << "������� ����� ���" << std::endl;

	int day;
	std::cin >> day;
	if (day > 0 && day <= 31) {
		if (day % 7 == 6 || day % 7 == 0 || (day >= 1 && day <= 5) || (day >= 8 && day <= 10)) {
			std::cout << "������ ��������" << std::endl;
		}
		else {
			std::cout << "������ �������" << std::endl;
		}
	}
	else {
		std::cout << "������ �����" << std::endl;
	}
}
void ex3HW5() {
	std::cout << "3. ������� - ����������" << std::endl;
	std::cout << "������� � ������ ��� ������ ���������� �����(1-7)" << std::endl;
	int day, firstDay;
	std::cin >> firstDay;
	firstDay--;
	int sat, sun;
	sat = (6 - firstDay) % 7;
	sun = (7 - firstDay) % 7;
	std::cout << "sat = " << sat << " sun = " << sun << std::endl;
	std::cout << "������� ����� ���" << std::endl;
	std::cin >> day;
	if (day > 0 && day <= 31) {
		if (day % 7 == sat || day % 7 == sun || (day >= 1 && day <= 5) || (day >= 8 && day <= 10)) {
			std::cout << "������ ��������" << std::endl;
		}
		else {
			std::cout << "������ �������" << std::endl;
		}
	}
	else {
		std::cout << "������ �����" << std::endl;
	}
}
void ex4HW5() {
	std::cout << "5. �������� - 2" << std::endl;
	std::cout << "����� ����� ������ �����?" << std::endl;
	int sum, num5k, num2k, num1k, num5h, num2h, num1h;
	std::cin >> sum;
	int buf = sum;
	if (sum % 100 == 0 && sum <= 150000 && sum > 0) {
		num5k = buf / 5000;
		buf %= 5000;
		num2k = buf / 2000;
		buf %= 2000;
		num1k = buf / 1000;
		buf %= 1000;
		num5h = buf / 500;
		buf %= 500;
		num2h = buf / 200;
		buf %= 200;
		num1h = buf / 100;
		buf %= 100;
		std::cout << "�� �������� �� ����" << std::endl;
		std::cout << num5k << " ����� ��������� 5000" << std::endl;
		std::cout << num2k << " ����� ��������� 2000" << std::endl;
		std::cout << num1k << " ����� ��������� 1000" << std::endl;
		std::cout << num5h << " ����� ��������� 500" << std::endl;
		std::cout << num2h << " ����� ��������� 200" << std::endl;
		std::cout << num1h << " ����� ��������� 100" << std::endl;
	}
	else if (sum < 0) {
		std::cout << "��������� �������� �� ����� ���� ������ ����" << std::endl;
	}
	else if (sum % 100 != 0) {
		std::cout << "��������� �������� ������ ���� ������ 100" << std::endl;
	}
	else {
		std::cout << "�� �� ������ ����� ������ 150 000 �" << std::endl;
	}
}
//�� �������� ��� ������� ������
void ex5HW5() {
	std::cout << "5. ���������� ������ ��� ������" << std::endl;
	std::cout << "������� ������ �������" << std::endl;
	int a, b, c, m, n, k;
	bool flag;
	std::cout << "� = ";
	std::cin >> a;
	std::cout << "B = ";
	std::cin >> b;
	std::cout << "C = ";
	std::cin >> c;
	std::cout << "������� ������ �������" << std::endl;
	std::cout << "M = ";
	std::cin >> m;
	std::cout << "N = ";
	std::cin >> n;
	std::cout << "K = ";
	std::cin >> k;
	flag = 0;
	if (m < a) {
		if (n < b) {
			if (k < c) {
				flag = 1;
			}
		}
		else if (n < c) {
			if (k < b) {
				flag = 1;
			}
		}
	}
	else if (m < b) {
		if (n < a) {
			if (k < c) {
				flag = 1;
			}
		}
		else if (n < c) {
			if (k < a) {
				flag = 1;
			}
		}
	}
	else if (m < c) {
		if (n < a) {
			if (k < b) {
				flag = 1;
			}
		}
		else if (n < b) {
			if (k < a) {
				flag = 1;
			}
		}
	}
}
void  ex6HW5() {
	std::cout << "6. �������� ���������������" << std::endl;
	std::cout << "������� ���� ��������(����.��.��)" << std::endl;
	int personYear, personMounth, personDay;
	/*���� ������ ������� ��������������� ���� ������ "scanf_s"?
	� ���� ��������� 
	cin >> year >> mounth >> day
	�� � ����� ������ ����� ������� ������ ����� ������
	� ��� �� ������� ����� �����, ����� ������ ��������� ������, � ��������� ������ ����� �����?*/
	scanf_s("%d.%d.%d", &personYear, &personMounth, &personDay);
	std::cout << "������� ����������� ����(����.��.��)" << std::endl;
	int nowYear, nowMounth, nowDay;
	scanf_s("%d.%d.%d", &nowYear, &nowMounth, &nowDay);
	bool flag = 0;
	if (nowYear - personYear > 18) {
		flag = 1;
	}
	else if (nowYear - personYear == 18) {
		if (nowMounth - personMounth > 0) {
			flag = 1;
		}
		else if (nowMounth - personMounth == 0) {
			if (nowDay - personDay > 0) {
				flag = 1;
			}
		}
	}
	if (flag) {
		std::cout << "��������� �������� �����" << std::endl;
	}
	else {
		std::cout << "��������� �������� ������!" << std::endl;
	}
}
void HW5() {
	int choise = 1;
	while (choise > 0) {
		std::cout << "5.6 ������������ ������" << std::endl;
		std::cout << "�������� �������:" << std::endl;
		std::cout << "1. ����� ����������" << std::endl;
		std::cout << "2. �������!" << std::endl;
		std::cout << "3. ������� - ����������" << std::endl;
		std::cout << "4. �������� - 2" << std::endl;
		std::cout << "5. ���������� ������ ��� ������" << std::endl;
		std::cout << "6. �������� ���������������" << std::endl << std::endl;
		std::cout << "0. �����" << std::endl;

		std::cin >> choise;

		switch (choise)
		{
		case 1: {
			system("cls");
			ex1HW5();
			system("pause");
			system("cls");
			break;
		};
		case 2: {
			system("cls");
			ex2HW5();
			system("pause");
			system("cls");
			break;
		};
		case 3: {
			system("cls");
			ex3HW5();
			system("pause");
			system("cls");
			break;
		};
		case 4: {
			system("cls");
			ex4HW5();
			system("pause");
			system("cls");
			break;
		};
		case 5: {
			system("cls");
			ex5HW5();
			system("pause");
			system("cls");
			break;
		};
		case 6: {
			system("cls");
			ex6HW5();
			system("pause");
			system("cls");
			break;
		};
		default:
			choise = 0;
		}
	}
}