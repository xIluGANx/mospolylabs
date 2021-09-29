

#include <iostream>
int main()
{
	setlocale(LC_ALL, "Russian");
	// ввод переменных
	int a;
	std::cout << "введите а - ";
	std::cin >> a;
	int b;
	std::cout << "введите b - ";
	std::cin >> b;
	
	// вычисление периметра
	int p = 2 * (a + b);
	// вывод периметра
	std::cout << p << "\n" ;
	system("pause");
	//вывод площади
	std::cout << a*b<<"\n";

}
