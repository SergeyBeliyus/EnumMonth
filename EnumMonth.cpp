#include <iostream>

enum class Month {january = 1, february, march, april, may, june, july, august, september, october, november, december};

void monthPrint(int i) {
	Month s = static_cast<Month>(i);
	if (s == Month::january) {
		std::cout << "Январь" << std::endl;
	}
	else if (s == Month::february) {
		std::cout << "Февраль" << std::endl;
	}
	else if (s == Month::march) {
		std::cout << "Март" << std::endl;
	}
	else if (s == Month::april) {
		std::cout << "Апрель" << std::endl;
	}
	else if (s == Month::may) {
		std::cout << "Май" << std::endl;
	}
	else if (s == Month::june) {
		std::cout << "Июнь" << std::endl;
	}
	else if (s == Month::july) {
		std::cout << "Июль" << std::endl;
	}
	else if (s == Month::august) {
		std::cout << "Август" << std::endl;
	}
	else if (s == Month::september) {
		std::cout << "Сентябрь" << std::endl;
	}
	else if (s == Month::october) {
		std::cout << "Октябрь" << std::endl;
	}
	else if (s == Month::november) {
		std::cout << "Ноябрь" << std::endl;
	}
	else if (s == Month::december) {
		std::cout << "Декабрь" << std::endl;
	}
	else {
		std::cout << "Неверное число!" << std::endl;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int number;
	std::cout << "Введите номер месяца: ";
	std::cin >> number;
	while (number != 0){
		monthPrint(number);
		std::cout << "Введите номер месяца: ";
		std::cin >> number;
	} 
}