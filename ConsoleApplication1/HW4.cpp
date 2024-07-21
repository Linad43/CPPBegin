#include <stdio.h>
#include <iostream>

void ex1() {
	double a, b;
	std::cout << "Введите первое число:" << std::endl;
	std::cin >> a;
	std::cout << "Введите второе число:" << std::endl;
	std::cin >> b;

	if (a > b) {
		std::cout << "Второе число меньше: " << b << std::endl;
	}
	else if (b > a) {
		std::cout << "Первое число меньше: " << a << std::endl;
	}
	else {
		std::cout << "Чила равны: " << a << std::endl;
	}
}
void ex2() {
	double a, b, sum;
	std::cout << "Введите первое число:" << std::endl;
	std::cin >> a;
	std::cout << "Введите второе число:" << std::endl;
	std::cin >> b;
	std::cout << "Введите их сумму:" << std::endl;
	std::cin >> sum;
	if (sum == a + b) {
		std::cout << "Верно!" << std::endl;
	}
	else {
		std::cout << "Ошибка, верный результат: " << a + b << std::endl;
	}
}
void ex3() {
	int a;
	std::cout << "Введите число: " << std::endl;
	std::cin >> a;
	if (a % 2 == 0) {
		std::cout << "Число " << a << " - чётное" << std::endl;
	}
	else {
		std::cout << "Число " << a << " - нечётное" << std::endl;
	}
}
void ex4() {
	double exp;
	std::cout << "Введите число очков опыта: " << std::endl;
	std::cin >> exp;
	if (exp < 0) {
		std::cout << "Ошибка ввода, опыт не может быть отрицательным!" << std::endl;
	}
	else if (exp >= 0 && exp < 1000) {
		std::cout << "Ваш уровень: 1" << std::endl;
	}
	else if (exp >= 1000 && exp < 2500) {
		std::cout << "Ваш уровень: 2" << std::endl;
	}
	else if (exp >= 2500 && exp < 5000) {
		std::cout << "Ваш уровень: 3" << std::endl;
	}
	else {
		std::cout << "Ваш уровень: 4" << std::endl;
	}
}
void ex5() {
	int a, b;
	std::cout << "Введите первое число:" << std::endl;
	std::cin >> a;
	std::cout << "Введите второе число:" << std::endl;
	std::cin >> b;
	if (a % b == 0) {
		std::cout << "Да! Первое число " << a << " делится на второе " << b << " без остатка" << std::endl;
	}
	else {
		std::cout << "Нет! Первое число " << a << " не делится на второе " << b << " без остатка" << std::endl;
	}
}
void ex6() {
	int mansCount;
	int barbersCount;

	std::cout << "***Барбершоп-калькулятор***" << std::endl;
	std::cout << "Введите число мужчин в городе: " << std::endl;
	std::cin >> mansCount;

	std::cout << "Сколько уже барберов удалось нанять?" << std::endl;
	std::cin >> barbersCount;

	int mansPerDay = mansCount / 30;
	int mansPerBarber = 8;
	int mansPerBarbePerMonth = mansPerBarber * 30;
	std::cout << "Один барбер стрижет " << mansPerBarbePerMonth << " в месяц" << std::endl;
	int requiredBarberCount = mansCount / mansPerBarbePerMonth;
	if (mansCount % mansPerBarbePerMonth != 0) {
		requiredBarberCount++;
	}
	std::cout << "Необходимое число барберов: " << requiredBarberCount << std::endl;

	std::cout << requiredBarberCount << " барбера могут постричь " <<
		requiredBarberCount * mansPerBarbePerMonth << " мужчин за месяц" << std::endl;
	if (requiredBarberCount > barbersCount) {
		std::cout << "Нужно больше барберов!!!" << std::endl;
	}
	else {
		std::cout << "Барберов хватает." << std::endl;
	}
}
void ex7() {
	int day;
	std::cout << "Введите день недели (1-7): " << std::endl;
	std::cin >> day;
	switch (day)
	{
	case 1: {
		std::cout << "Меню сегодня ";
		std::cout << "(понедельник):" << std::endl;
		std::cout << "Сэндвич с куриным филе и сырным соусом" << std::endl;
		std::cout << "Фрикадельки в азиатском соусе и рис с овощами" << std::endl;
		std::cout << "Салат с куриной грудкой, запеченным картофелем и соусом по-деревенски" << std::endl;
		std::cout << "Шницель из курицы с гречкой и сливочным терияки" << std::endl;
		break;
	}
	case 2: {
		std::cout << "Меню сегодня ";
		std::cout << "(вторник):" << std::endl;
		std::cout << "Сырники с клубничным джемом" << std::endl;
		std::cout << "Куриная котлета на гриле с пюре" << std::endl;
		std::cout << "Шарлотка с грушей и миндалем" << std::endl;
		std::cout << "Вок с курицей" << std::endl;
		break;
	}
	case 3: {
		std::cout << "Меню сегодня ";
		std::cout << "(среда):" << std::endl;
		std::cout << "Овсяная каша с яблочно-брусничным конфитюром" << std::endl;
		std::cout << "Сырный крем-суп с гренками" << std::endl;
		std::cout << "Блинчик с мясом и сметаной" << std::endl;
		std::cout << "Котлета куриная с овощами в сливочном соусе и рис" << std::endl;
		break;
	}
	case 4: {
		std::cout << "Меню сегодня ";
		std::cout << "(четверг):" << std::endl;
		std::cout << "Банановый бисквит с маком и карамельным соусом" << std::endl;
		std::cout << "Рагу из говядины и сметанный соус" << std::endl;
		std::cout << "Ролл по-мексикански" << std::endl;
		std::cout << "Шпинатные спагетти с фаршем под пряно-сливочным соусом" << std::endl;
		break;
	}
	case 5: {
		std::cout << "Меню сегодня ";
		std::cout << "(пятница):" << std::endl;
		std::cout << "Бейгл с ветчиной" << std::endl;
		std::cout << "Фрикасе из курицы с грибами и булгуром" << std::endl;
		std::cout << "Блинчик с черничным конфитюром и сливочным кремом" << std::endl;
		std::cout << "Куриная котлета в сливочно-грибном соусе и гречка" << std::endl;
		break;
	}
	case 6: {
		std::cout << "Меню сегодня ";
		std::cout << "(суббота):" << std::endl;
		std::cout << "Гурьевская каша с карамелизированными орехами" << std::endl;
		std::cout << "Паста со сливочным песто и фаршем" << std::endl;
		std::cout << "Салат с курицей, нутом и горчичным соусом" << std::endl;
		std::cout << "Мясная запеканка с зеленым горошком и пюре" << std::endl;
		break;
	}
	case 7: {
		std::cout << "Меню сегодня ";
		std::cout << "(воскресенье):" << std::endl;
		std::cout << "Банановый бисквит с маком и карамельным соусом" << std::endl;
		std::cout << "Рагу из говядины и сметанный соус" << std::endl;
		std::cout << "Ролл по-мексикански" << std::endl;
		std::cout << "Шпинатные спагетти с фаршем под пряно-сливочным соусом" << std::endl;
		break;
	}
	default:
		std::cout << "Ошибка ввода" << std::endl;
		break;
	}
}
void ex8() {
	int salary[3];
	std::cout << "Введите зарплату первого сотрудника: " << std::endl;
	std::cin >> salary[0];
	std::cout << "Введите зарплату второго сотрудника: " << std::endl;
	std::cin >> salary[1];
	std::cout << "Введите зарплату третьего сотрудника: " << std::endl;
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
	std::cout << "Самая высокая зарплата " << max << std::endl;
	std::cout << "Разница между самой высокой зарплатой и самой низкой: " << max - min << std::endl;
	std::cout << "Средняя зарплата " << ((double)sum) / 3 << std::endl;
}
void ex9() {
	int salary;
	double tax = 0;
	std::cout << "Введите зарплату: " << std::endl;
	std::cin >> salary;
	if (salary < 0) {
		std::cout << "Ошибка ввода " << std::endl;
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
	std::cout << "Сумма налога: " << tax << std::endl;
}

void HW4() {
	//Минимум из двух чисел
	int choise = 1;
	while (choise > 0) {
		std::cout << "4.4 Практическая работа" << std::endl;
		std::cout << "Выберите задание:" << std::endl;
		std::cout << "1. Минимум из двух чисел" << std::endl;
		std::cout << "2. Складываем в уме" << std::endl;
		std::cout << "3. Проверка на чётное число" << std::endl;
		std::cout << "4. Калькулятор опыта" << std::endl;
		std::cout << "5. Кратность числа" << std::endl;
		std::cout << "6. Улучшим барберов" << std::endl;
		std::cout << "7. Меню ресторана" << std::endl;
		std::cout << "8. Зарплата" << std::endl;
		std::cout << "9. Прогресивный налог" << std::endl << std::endl;
		std::cout << "0. Выход" << std::endl;

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
