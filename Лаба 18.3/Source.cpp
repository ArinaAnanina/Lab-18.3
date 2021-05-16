#include <iostream>
#include "Pair.h"
#include <string>

using namespace std;
int main()
{
	system("color F0");
	setlocale(LC_ALL,"rus");
	Pair A;
	cout << "Конструктор без параметров: " << endl;
	A.Show();

	Pair B(23, 20.5);
	cout << "Конструктор с параметами: " << endl;
	B.Show();

	Pair C(B);
	cout << "Конструктор копирования: " << endl;
	C.Show();

	B++;
	cout << "Постфиксная итерация: " << endl;
	B.Show();

	Pair incB = ++C;
	incB.Set_Second(100.5);
	cout << "Префиксная итерация: " << endl;
	incB.Show();

	if (incB < B) {
		cout << "incB < B" << endl;
	}

	if (incB > B) {
		cout << "incB > B" << endl;
	}
}