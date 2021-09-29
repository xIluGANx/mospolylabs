#include<iostream>
#include<cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    // ввод координат точек A B C
    int Ax, Ay, Bx, By, Cx, Cy;
    cout << "Координаты точки A. ";
    cout << "x = ";
    cin >> Ax;
    cout << "y = ";
    cin >> Ay;

    cout << "Координаты точки B. ";
    cout << "x = ";
    cin >> Bx;
    cout << "y = ";
    cin >> By;
    cout << "Координаты точки C. ";
    cout << "x = ";
    cin >> Cx;
    cout << "y = ";
    cin >> Cy;

    // вычисление
    cout << "Длина отрезка AB: " << sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2)) << endl;
    cout << "Длина отрезка BC: " << sqrt(pow(Bx - Cx, 2) + pow(By - Cy, 2)) << endl;
    cout << "Сумма отрезков AC и BC: " << sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2)) + sqrt(pow(Bx - Cx, 2) + pow(By - Cy, 2)) << endl;

}
