#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	setlocale(LC_ALL, "RU");

	int nomer;
	cout << "1 - ��������� �� ��������� " << endl;
	cout << "����� ����� - ";
	cin >> nomer;

	if (nomer == 1) {

		double many, time, premia, zp, nalog;

		cout << "������� ����� � ��� - ";
		cin >> many;

		cout << "������� ����� ��������� - ";
		cin >> time;

		cout << "����� ������� ������ � % - ";
		cin >> premia;

		cout << "����� � % = ";
		cin >> nalog;

		zp = (many * time) * ((premia / 100) + 1);
		cout << "�������� ��������� - " << zp << endl;

		zp = zp * (1 - (nalog / 100));
		cout << "�������� � ������ ������ �� ���� = " << zp;
	}
	return 0;
}