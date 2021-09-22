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
	int sum = (a+b)/2;
	// вывод
	cout << "ответ : " << sum;

}
