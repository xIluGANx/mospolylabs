#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	// ввод переменных
	cout << "введите a - ";
	float a;
	cin >> a;
	cout << "введиде b - ";
	float b;
	cin >> b;
	//счет
	int sum = (a+b)/2;
	// вывод
	cout << "ответ : " << sum;

}
