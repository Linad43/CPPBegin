#include <stdio.h>
#include <iostream>
#include "Random.h"


void HW2() {
	//ex1
	printf("ex1\n");
	int lap = 4;
	//int speed = 358;
	int engine = 254;
	int wheels = 93;
	int steerinWheel = 49;
	int wind = 21;
	int rain = 17;
	int speed = engine + wheels + steerinWheel - (wind + rain);
	std::cout << "===================\n";
	std::cout << "����� �����. ���� " << lap << "\n";
	std::cout << "===================\n";
	std::cout << "������� (" << speed << ")\n";
	std::cout << "===================\n";
	std::cout << "��������: �������\n";
	std::cout << "��������: " << speed << "\n";
	std::cout << "-------------------\n";
	std::cout << "���������\n";
	std::cout << "���������: +" << engine << "\n";
	std::cout << "������: +" << wheels << "\n";
	std::cout << "����: +" << steerinWheel << "\n";
	std::cout << "-------------------\n";
	std::cout << "�������� ������ ������\n";
	std::cout << "�����: -" << wind << "\n";
	std::cout << "�����: -" << rain << "\n";

	//ex2
	printf("ex2\n");
	int cost, costProd, costTf;
	printf("������� ��������� ������: ");
	//scanf_s("%d", &costProd);
	costProd = 10;
	printf("%d\n", costProd);
	printf("������� ��������� ��������: ");
	//scanf_s("%d", &costTf);
	costTf = 5;
	printf("%d\n", costTf);
	cost = costProd + costTf;
	printf("������ ��������� ������: %d\n", cost);

	//ex3
	printf("ex3\n");
	std::cout << "��� ��������� ����������, ������� �������� ������ ��������� ������ �� �����.\n";
	std::cout << "������� ������������ �����: ";
	int timeWork = random(400, 500);
	std::cout << timeWork << std::endl;
	std::cout << "������� ����� ������ ������ �����? ";
	int timeClient = random(2, 5);
	std::cout << timeClient << std::endl;
	std::cout << "������� ����� ������ �������� �����? ";
	int timeStaff = random(2, 5);
	std::cout << timeStaff << std::endl;
	int countClients = timeWork / (timeClient + timeStaff);
	printf("�� ����� ������� � %d ����� ������ ������ ��������� %d\n", timeWork, countClients);

	//ex4
	printf("ex4\n");
	printf("������������ ��� � ������������ ����������\n");
	int sumTot = random(10, 100) * 10000;
	printf("������� �����, ��������� � ���������: %d\n", sumTot);
	int countSumHome = random(1, 10);
	printf("������� ��������� � ����� ����? %d\n", countSumHome);
	int countHome = random(3, 6) * random(1, 25);
	printf("������� ������� � ������ ��������? %d\n", countHome);
	int sumOneHome = sumTot / (countSumHome * countHome);
	printf("������ �������� ������ ������� �� %d\n", sumOneHome);
}