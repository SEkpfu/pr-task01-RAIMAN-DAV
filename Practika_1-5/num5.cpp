#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	setlocale(LC_ALL, "RU");

	double many1, many2, time1, time2, zp1, zp2;

	cout << "������ � ��� 1 ��������� - ";
	cin >> many1;
	cout << "������ � ��� 2 ��������� - ";
	cin >> many2;

	cout << "������� ����� ��������� 1 �������� - ";
	cin >> time1;
	cout << "������� ����� ��������� 2 �������� - ";
	cin >> time2;

	zp1 = (many1 * time1);
	cout << "�������� 1 ��������� - " << zp1 << endl;
	zp2 = (many2 * time2);
	cout << "�������� 2 ��������� - " << zp2 << endl;

	if (zp1 > zp2)
		cout << "�������� 1 ��������� ������";
	else 
		cout << "�������� 2 ��������� ������";

	return 0;
}