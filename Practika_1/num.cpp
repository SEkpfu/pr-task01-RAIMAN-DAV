#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	setlocale(LC_ALL, "RU");

	double many, time, premia, zp;

	cout << "������� ����� � ��� - ";
	cin >> many;

	cout << "������� ����� ��������� - ";
	cin >> time;

	cout << "����� ������� ������ � % - ";
	cin >> premia;

	zp = (many * time) * ((premia / 100) + 1);
	cout << "�������� ��������� - " << zp;

	return 0;
}