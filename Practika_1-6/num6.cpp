#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	setlocale(LC_ALL, "RU");
	
	string fam1, fam2;
	double many1, many2, time1, time2, premia1 = 0, premia2 = 0, zp1, zp2, nalog = 5, k_nalog1, k_nalog2;

	cout << "������� 1 ��������� - ";
	cin >> fam1;
	cout << "������� 2 ��������� - ";
	cin >> fam2;

	cout << "������ � ��� " << fam1 << " - ";
	cin >> many1;
	cout << "������ � ��� " << fam2 << " - ";
	cin >> many2;

	cout << "������� ����� ��������� " << fam1 << " - ";
	cin >> time1;
	cout << "������� ����� ��������� " << fam2 << " - ";
	cin >> time2;

	int num;
	cout << "���� ������(%) ����� - 1" << endl << "���� ������(%) ������ - 2" << endl;
	cout << "������� ����� - ";  cin >> num;

	if (num == 1)
	{
		cout << "����� ����� ������(%) - ";
		cin >> premia1, premia2;
	}
	else if (num == 2)
	{
		cout << "����� ������ " << fam1 << " - ";
		cin >> premia1;

		cout << "����� ������ " << fam2 << " - ";
		cin >> premia2;
	}
	else
		cout << "����� ������ �� ��������" << endl;


	zp1 = (many1 * time1) * ((premia1 / 100) + 1);
	cout << "�������� " << fam1 << " - " << zp1 << endl;

	zp2 = (many2 * time2) * ((premia2 / 100) + 1);
	cout << "�������� " << fam2 << " - " << zp2 << endl;


	k_nalog1 = zp1 * (nalog / 100);
	cout << "����� = " << k_nalog1 << endl;

	k_nalog2 = zp2 * (nalog / 100);
	cout << "����� = " << k_nalog2 << endl;


	zp1 = zp1 - k_nalog1;
	cout << "�� � ������ ������ �� ���� � " << fam1 << " = " << zp1 << endl;

	zp2 = zp2 - k_nalog2;
	cout << "�� � ������ ������ �� ���� � " << fam2 << " = " << zp2 << endl;

	cout << "�� �������" << endl; 

		if (zp1 < 1000)
			cout << fam1;
		if (k_nalog1 > 50)
			cout << fam1.front() << "-" << fam1.back();

	return 0;

}