#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	setlocale(LC_ALL, "RU");

	int nomer;
	cout << "1 - Посчитать зп работника " << endl;
	cout << "Введи номер - ";
	cin >> nomer;

	if (nomer == 1) {

		double many, time, premia, zp, nalog;

		cout << "Сколько денег в час - ";
		cin >> many;

		cout << "Сколько часов отработал - ";
		cin >> time;

		cout << "Какой процент премия в % - ";
		cin >> premia;

		cout << "Налог в % = ";
		cin >> nalog;

		zp = (many * time) * ((premia / 100) + 1);
		cout << "Зарплата работника - " << zp << endl;

		zp = zp * (1 - (nalog / 100));
		cout << "Зарплата с учетом налога на руки = " << zp;
	}
	return 0;
}