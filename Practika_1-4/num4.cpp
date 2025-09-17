#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	setlocale(LC_ALL, "RU");

	double many, time, premia, zp, nalog = 13;

	cout << "Сколько денег в час - ";
	cin >> many;

	cout << "Сколько часов отработал - ";
	cin >> time;

	cout << "Какой процент премия в % - ";
	cin >> premia;

	zp = (many * time) * ((premia / 100) + 1);
	cout << "Зарплата работника - " << zp << endl;

	nalog = zp * (nalog / 100);
	cout << "Налог = " << nalog << endl;

	zp = zp - nalog;
	cout << "Зарплата с учетом налога на руки = " << zp;

	return 0;
}