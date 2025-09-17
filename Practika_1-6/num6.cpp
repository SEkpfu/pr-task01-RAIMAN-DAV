#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	setlocale(LC_ALL, "RU");
	
	string fam1, fam2;
	double many1, many2, time1, time2, premia1 = 0, premia2 = 0, zp1, zp2, nalog = 5, k_nalog1, k_nalog2;

	cout << "Фамилия 1 работника - ";
	cin >> fam1;
	cout << "Фамилия 2 работника - ";
	cin >> fam2;

	cout << "Ставка в час " << fam1 << " - ";
	cin >> many1;
	cout << "Ставка в час " << fam2 << " - ";
	cin >> many2;

	cout << "Сколько часов отработал " << fam1 << " - ";
	cin >> time1;
	cout << "Сколько часов отработал " << fam2 << " - ";
	cin >> time2;

	int num;
	cout << "Если премия(%) общая - 1" << endl << "Если премия(%) разная - 2" << endl;
	cout << "Введите номер - ";  cin >> num;

	if (num == 1)
	{
		cout << "Какая общая премия(%) - ";
		cin >> premia1, premia2;
	}
	else if (num == 2)
	{
		cout << "Какая премия " << fam1 << " - ";
		cin >> premia1;

		cout << "Какая премия " << fam2 << " - ";
		cin >> premia2;
	}
	else
		cout << "Номер введен не коректно" << endl;


	zp1 = (many1 * time1) * ((premia1 / 100) + 1);
	cout << "Зарплата " << fam1 << " - " << zp1 << endl;

	zp2 = (many2 * time2) * ((premia2 / 100) + 1);
	cout << "Зарплата " << fam2 << " - " << zp2 << endl;


	k_nalog1 = zp1 * (nalog / 100);
	cout << "Налог = " << k_nalog1 << endl;

	k_nalog2 = zp2 * (nalog / 100);
	cout << "Налог = " << k_nalog2 << endl;


	zp1 = zp1 - k_nalog1;
	cout << "Зп с учетом налога на руки у " << fam1 << " = " << zp1 << endl;

	zp2 = zp2 - k_nalog2;
	cout << "Зп с учетом налога на руки у " << fam2 << " = " << zp2 << endl;

	cout << "По заданию" << endl; 

		if (zp1 < 1000)
			cout << fam1;
		if (k_nalog1 > 50)
			cout << fam1.front() << "-" << fam1.back();

	return 0;

}