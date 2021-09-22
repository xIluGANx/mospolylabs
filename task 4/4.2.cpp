#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	// ввод переменных
	cout << "введите d - ";
	int d;
	cin >> d;
	double pi = 3.14;
	//счет
	double L = pi * d;
	// вывод
	cout << "ответ :" << L;

}
