#include <iostream>
#include <stdio.h>
#include<math.h>

int random(int min, int max) {
	return (min + rand() % (max - min + 1));
}
int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

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
	int cost, cost_prod, cost_tf;
	printf("Введите стоимость товара: ");
	//scanf_s("%d", &cost_prod);
	cost_prod = 10;
	printf("%d", cost_prod);
	printf("Введите стоимость доставки: ");
	//scanf_s("%d", &cost_tf);
	cost_tf = 5;
	printf("%d", cost_tf);
	cost = cost_prod + cost_tf;
	printf("Полная стоимость товара: %d", cost);

	//ex3
	printf("ex3\n");
	std::cout << "Эта программа рассчитает, сколько клиентов успеет обслужить кассир за смену.\n";
	std::cout << "Введите длительность смены: ";
	int time_work = random(400, 500);
	std::cout << time_work << std::endl;
	std::cout << "Сколько минут клиент делает заказ? ";
	int time_client = random(2, 5);
	std::cout << time_client << std::endl;
	std::cout << "Сколько минут кассир собирает заказ? ";
	int time_staff = random(2, 5);
	std::cout << time_staff << std::endl;
	int count_clients = time_work / (time_client + time_staff);
	printf("За смену длинной в %d минут кассир успеет обслужить %d", time_work, count_clients);

	//ex4
	printf("ex4\n");
	printf("Приветствуем вас в калькуляторе квартплаты");
	int sum_tot = random(10, 100) * 10000;
	printf("Введите сумму, указанную в квитанции: %d", sum_tot);
	int count_sum_home = random(1, 10);
	printf("Сколько подъездов в вашем доме? %d", count_sum_home);
	int count_home = random(3, 6) * random(1, 25);
	printf("Сколько квартир в каждом подъезде? %d", count_home);
	int sum_one_home = sum_tot / (count_sum_home * count_home);
	printf("Каждая квартира должна платить по %d", sum_one_home);
}