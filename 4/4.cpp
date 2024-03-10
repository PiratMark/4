#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int ab, bc, m;
	cout << "Введите расстояние между пунктами А и В в км: ";
	cin >> ab;
	cout << "Введите расстояние между пунктами В и С в км: ";
	cin >> bc;
	cout << "Введите вес груза в кг: ";
	cin >> m;
	if (m > 2000) {
		cout << "\nСамолет " << m << " не поднимает\n" << endl;
	}
	else {
		int koef;

		if (m <= 500) koef = 1;
		else if (m <= 1000) koef = 4;
		else if (m <= 1500) koef = 7;
		else             koef = 9;

		int benzin_ab = ab * koef;
		int benzin_bc = bc * koef;
		if (benzin_ab > 300) {
			cout << "\nНевозможен полет по маршруту AB\n";
		}
		else if (benzin_bc > 300) {
			cout << "\nНевозможен полет по маршруту BC\n";
		}
		else {
			int ostatok = 300 - benzin_ab - benzin_bc;
			if (ostatok >= 0) {
				cout << "Полет возможен без дозаправки\n";
			}
			else {
				cout << "Полет возможен, но надо в B долить " << -ostatok << "\n";
			}
		}
	}
	return 0;
}