#include <iostream>


void ex1HW5() {
	std::cout << "1. Полет нормальный" << std::endl;
	int speed, height;
	std::cout << "Введите скорость полета" << std::endl;
	std::cin >> speed;
	std::cout << "Введите высоту полета" << std::endl;
	std::cin >> height;
	if (speed >= 750 && speed <= 850 && height >= 9000 && height <= 9500) {
		std::cout << "Полет нормальный" << std::endl;
	}
	else {
		std::cout << "Необходима корректировка полета" << std::endl;
	}
}
void ex2HW5() {
	std::cout << "2. Майские!" << std::endl;
	std::cout << "Введите номер дня" << std::endl;

	int day;
	std::cin >> day;
	if (day > 0 && day <= 31) {
		if (day % 7 == 6 || day % 7 == 0 || (day >= 1 && day <= 5) || (day >= 8 && day <= 10)) {
			std::cout << "Введен выходной" << std::endl;
		}
		else {
			std::cout << "Введен рабочий" << std::endl;
		}
	}
	else {
		std::cout << "Ошибка ввода" << std::endl;
	}
}
void ex3HW5() {
	std::cout << "3. Майские - усложнение" << std::endl;
	std::cout << "Введите с какого дня недели начинается месяц(1-7)" << std::endl;
	int day, firstDay;
	std::cin >> firstDay;
	firstDay--;
	int sat, sun;
	sat = (6 - firstDay) % 7;
	sun = (7 - firstDay) % 7;
	std::cout << "sat = " << sat << " sun = " << sun << std::endl;
	std::cout << "Введите номер дня" << std::endl;
	std::cin >> day;
	if (day > 0 && day <= 31) {
		if (day % 7 == sat || day % 7 == sun || (day >= 1 && day <= 5) || (day >= 8 && day <= 10)) {
			std::cout << "Введен выходной" << std::endl;
		}
		else {
			std::cout << "Введен рабочий" << std::endl;
		}
	}
	else {
		std::cout << "Ошибка ввода" << std::endl;
	}
}
void ex4HW5() {
	std::cout << "5. Банкомат - 2" << std::endl;
	std::cout << "Какую сумму хотите снять?" << std::endl;
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
		std::cout << "Вы получите на руки" << std::endl;
		std::cout << num5k << " купюр номиналом 5000" << std::endl;
		std::cout << num2k << " купюр номиналом 2000" << std::endl;
		std::cout << num1k << " купюр номиналом 1000" << std::endl;
		std::cout << num5h << " купюр номиналом 500" << std::endl;
		std::cout << num2h << " купюр номиналом 200" << std::endl;
		std::cout << num1h << " купюр номиналом 100" << std::endl;
	}
	else if (sum < 0) {
		std::cout << "Введенное значение не может быть меньше нуля" << std::endl;
	}
	else if (sum % 100 != 0) {
		std::cout << "Введенное значение должно быть кратно 100" << std::endl;
	}
	else {
		std::cout << "Вы не можете снять больше 150 000 р" << std::endl;
	}
}
//Не придумал как сделать кратко
void ex5HW5() {
	std::cout << "5. Усложнение задачи про кирпич" << std::endl;
	std::cout << "Размеры первой коробки" << std::endl;
	int a, b, c, m, n, k;
	bool flag;
	std::cout << "А = ";
	std::cin >> a;
	std::cout << "B = ";
	std::cin >> b;
	std::cout << "C = ";
	std::cin >> c;
	std::cout << "Размеры второй коробки" << std::endl;
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
	std::cout << "6. Грустное совершеннолетие" << std::endl;
	std::cout << "Введите дату рождения(гггг.мм.дд)" << std::endl;
	int personYear, personMounth, personDay;
	/*Есть способ сделать форматированный ввод помимо "scanf_s"?
	Я смог придумать 
	cin >> year >> mounth >> day
	Но в таком случае нужно вводить данные через пробел
	а что бы вводить через точку, нужно только создавать строку, и разделять строку через точки?*/
	scanf_s("%d.%d.%d", &personYear, &personMounth, &personDay);
	std::cout << "Введите сегодняшнюю дату(гггг.мм.дд)" << std::endl;
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
		std::cout << "Продавать алкоголь можно" << std::endl;
	}
	else {
		std::cout << "Продавать алкоголь НЕЛЬЗЯ!" << std::endl;
	}
}
void HW5() {
	int choise = 1;
	while (choise > 0) {
		std::cout << "5.6 Практическая работа" << std::endl;
		std::cout << "Выберите задание:" << std::endl;
		std::cout << "1. Полет нормальный" << std::endl;
		std::cout << "2. Майские!" << std::endl;
		std::cout << "3. Майские - усложнение" << std::endl;
		std::cout << "4. Банкомат - 2" << std::endl;
		std::cout << "5. Усложнение задачи про кирпич" << std::endl;
		std::cout << "6. Грустное совершеннолетие" << std::endl << std::endl;
		std::cout << "0. Выход" << std::endl;

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