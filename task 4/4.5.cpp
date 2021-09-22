#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	// ввод переменных
	cout << "введите a - ";
	int a;
	cin >> a;
	cout << "введиде b - ";
	int b;
	cin >> b;
	//счет
	// вывод
	if (a != 0 and b != 0) {
		cout << "сумма модулей a и b: " << abs(a) + abs(b) << endl
			<< "разность модулей a и b: " << abs(a) - abs(b) << endl
			<< "произведение модулей a и b: " << abs(a) * abs(b) << endl
			<< "частное модулей a и b: " << abs(a) / abs(b) << "\n";
	}
	else {
		cout << " ОШИБКА : ВВЕДЕН 0";
	}
}
