#include <stdio.h>
#include <iostream>
#include <string>
#define PART_DRIVER 0.25
#define PART_FUEL 0.2
#define PART_REPAIR 0.2
#define PART_TAXES 0.2

void HW3() {
	//ex1
	std::cout << "ex1\n";
	{

		std::string stoping[] =
		{ "������", "������", "������", "���������" };
		int countClient = 0;
		int sumMoney = 0;
		int cost = 20;
		for (int i = 0; i < size(stoping); i++) {
			std::cout << "��������� �� ���������: ";
			std::cout << stoping[i] << std::endl;
			int passOut = 0;
			if (i == 0) {
				std::cout << "��� ������ ���������, ������� ����\n";
			}
			else if (i != size(stoping) - 1) {
				std::cout << "������� ���������� ����� �� ���������?\n";
				std::cin >> passOut;
			}
			int passIn = 0;
			if (i != size(stoping) - 1) {
				std::cout << "������� ���������� ����� �� ���������?\n";
				passIn;
				std::cin >> passIn;
			}
			else {
				std::cout << "��� �������� ���������, ��� ��������� �����\n";
			}

			sumMoney += passIn * cost;
			if (i != size(stoping) - 1) {
				std::cout << "������������ � ��������� ";
				std::cout << stoping[i] << ". ";
				countClient += passIn - passOut;
				std::cout << "���������� � ��������: ";
				std::cout << countClient << std::endl;
			}
			else {
				std::cout << "������� ��������\n";
			}
		}

		//����
		int salaryDriver = sumMoney * PART_DRIVER;
		int costFuel = sumMoney * PART_FUEL;
		int taxes = sumMoney * PART_TAXES;
		int costRepair = sumMoney * PART_REPAIR;
		int result = sumMoney - (salaryDriver + costFuel + taxes + costRepair);
		std::cout << "����� ���������� " << sumMoney << std::endl;
		std::cout << "�������� �������� " << salaryDriver << std::endl;
		std::cout << "������� �� ������� " << costFuel << std::endl;
		std::cout << "������ " << taxes << std::endl;
		std::cout << "������� �� ������ ������ " << costRepair << std::endl;
		std::cout << "����� ����� " << result << std::endl;
	}

	//ex2
	std::cout << "\nex2\n";
	{
		int a = 42;
		int b = 153;
		std::cout << "a: " << a << "\n"; /* �� ����� ����� �������� 42 */
		std::cout << "b: " << b << "\n"; /* �� ����� ����� �������� 153 */

		/* ������ �������� */
		int buf = a;
		a = b;
		b = buf;

		std::cout << "a: " << a << "\n"; /* �� ����� ����� �������� 153 */
		std::cout << "b: " << b << "\n"; /* �� ����� ����� �������� 42 */
	}

	//ex3
	std::cout << "\nex3\n";
	{
		int speedUp = 50;
		int speedDown = 20;
		float countDay = 2.5;
		float countHight = 2;
		int beginHeight = 100;
		int nowHeight = speedUp * countDay - speedDown * countHight + beginHeight;
		std::cout << "������ ������� �� ������ ���� " << nowHeight << std::endl;
	}

	//ex4
	std::cout << "\nex4\n";
	{
		int a = 42;
		int b = 153;
		std::cout << "a: " << a << "\n"; /* �� ����� ����� �������� 42 */
		std::cout << "b: " << b << "\n"; /* �� ����� ����� �������� 153 */

		/* ������ �������� */
		a = a + b;
		b = a - b;
		a = a - b;

		std::cout << "a: " << a << "\n"; /* �� ����� ����� �������� 153 */
		std::cout << "b: " << b << "\n"; /* �� ����� ����� �������� 42 */
	}
}