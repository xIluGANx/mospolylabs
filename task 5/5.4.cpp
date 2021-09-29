#include<iostream>
#include<cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    // ввод координат точек A B C
    float Ax, Ay, Bx, By;
    float temp1, temp2;

    cout << "введите координаты точек. "<<endl;
    cout << "x1 = ";
    cin >> Ax;
    cout << "y1 = ";
    cin >> Ay;
    cout << "x2 = ";
    cin >> Bx;
    cout << "y2 = ";
    cin >> By;

    // вычисление
    temp1 = sqrt(pow(Ax - Bx, 2) + pow(Ay - Ay, 2));
    temp1 = sqrt(pow(Bx - Bx , 2) + pow(Ax - Ay, 2));
    cout << "Периметр прямоугольника: " << (temp1 + temp2) * 2<<endl;
    cout << "Площадь прямоугольника: " << (temp1 * temp2)<<endl:
}
