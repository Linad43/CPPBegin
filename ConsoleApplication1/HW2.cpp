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
	std::cout << "Супер гонки. Круг " << lap << "\n";
	std::cout << "===================\n";
	std::cout << "Шумахер (" << speed << ")\n";
	std::cout << "===================\n";
	std::cout << "Водитель: Шумахер\n";
	std::cout << "Скорость: " << speed << "\n";
	std::cout << "-------------------\n";
	std::cout << "Оснащение\n";
	std::cout << "Двигатель: +" << engine << "\n";
	std::cout << "Колеса: +" << wheels << "\n";
	std::cout << "Руль: +" << steerinWheel << "\n";
	std::cout << "-------------------\n";
	std::cout << "Действия плохой погоды\n";
	std::cout << "Ветер: -" << wind << "\n";
	std::cout << "Дождь: -" << rain << "\n";

	//ex2
	printf("ex2\n");
	int cost, costProd, costTf;
	printf("Введите стоимость товара: ");
	//scanf_s("%d", &costProd);
	costProd = 10;
	printf("%d\n", costProd);
	printf("Введите стоимость доставки: ");
	//scanf_s("%d", &costTf);
	costTf = 5;
	printf("%d\n", costTf);
	cost = costProd + costTf;
	printf("Полная стоимость товара: %d\n", cost);

	//ex3
	printf("ex3\n");
	std::cout << "Эта программа рассчитает, сколько клиентов успеет обслужить кассир за смену.\n";
	std::cout << "Введите длительность смены: ";
	int timeWork = random(400, 500);
	std::cout << timeWork << std::endl;
	std::cout << "Сколько минут клиент делает заказ? ";
	int timeClient = random(2, 5);
	std::cout << timeClient << std::endl;
	std::cout << "Сколько минут кассир собирает заказ? ";
	int timeStaff = random(2, 5);
	std::cout << timeStaff << std::endl;
	int countClients = timeWork / (timeClient + timeStaff);
	printf("За смену длинной в %d минут кассир успеет обслужить %d\n", timeWork, countClients);

	//ex4
	printf("ex4\n");
	printf("Приветствуем вас в калькуляторе квартплаты\n");
	int sumTot = random(10, 100) * 10000;
	printf("Введите сумму, указанную в квитанции: %d\n", sumTot);
	int countSumHome = random(1, 10);
	printf("Сколько подъездов в вашем доме? %d\n", countSumHome);
	int countHome = random(3, 6) * random(1, 25);
	printf("Сколько квартир в каждом подъезде? %d\n", countHome);
	int sumOneHome = sumTot / (countSumHome * countHome);
	printf("Каждая квартира должна платить по %d\n", sumOneHome);
}