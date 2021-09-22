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
		cout << "сумма квадратов a и b: " << pow(a,2) + pow(b,2) << endl
			<< "разность квадратов a и b: " << pow(a,2) - pow(b,2) << endl
			<< "произведение квадратов a и b: " << pow(a,2) * pow(b,2) << endl
			<< "частное квадратов a и b: " << pow(a,2) / pow(b,2) << "\n";
	}
	else {
		cout << " ОШИБКА : ВВЕДЕН 0";
	}
}
