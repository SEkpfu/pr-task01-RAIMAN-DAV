#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	setlocale(LC_ALL, "RU");

	double many, time, premia, zp, nalog = 13;

	cout << "������� ����� � ��� - ";
	cin >> many;

	cout << "������� ����� ��������� - ";
	cin >> time;

	cout << "����� ������� ������ � % - ";
	cin >> premia;

	zp = (many * time) * ((premia / 100) + 1);
	cout << "�������� ��������� - " << zp << endl;

	nalog = zp * (nalog / 100);
	cout << "����� = " << nalog << endl;

	zp = zp - nalog;
	cout << "�������� � ������ ������ �� ���� = " << zp;

	return 0;
}