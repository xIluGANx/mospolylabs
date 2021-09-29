#include<iostream>;
#include<cmath>;
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	// ввод переменных x1 y1 x2 y2
	float x1,y1,x2,y2;
	cout << "введите x1 - ";
	cin >> x1;
	cout << "введите y1 - ";
	cin >> y1;
	cout << "введите x2 - ";
	cin >> x2;
	cout << "введите у2 - ";
	cin >> y2;
	// вычисление расстояния между точками
	cout << "Расстояние между точками: " << sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1),2))) << "\n";
	
}
