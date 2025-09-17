#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	setlocale(LC_ALL, "RU");

	double many1, many2, time1, time2, zp1, zp2;

	cout << "Ставка в час 1 работника - ";
	cin >> many1;
	cout << "Ставка в час 2 работника - ";
	cin >> many2;

	cout << "Сколько часов отработал 1 работник - ";
	cin >> time1;
	cout << "Сколько часов отработал 2 работник - ";
	cin >> time2;

	zp1 = (many1 * time1);
	cout << "Зарплата 1 работника - " << zp1 << endl;
	zp2 = (many2 * time2);
	cout << "Зарплата 2 работника - " << zp2 << endl;

	if (zp1 > zp2)
		cout << "Зарплата 1 работника больше";
	else 
		cout << "Зарплата 2 работника больше";

	return 0;
}