#include<iostream>
#include<cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    // ввод координат точек A B C
    int Ax, Ay, Bx, By, Cx, Cy;
    float temp1, temp2;
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
    temp1 = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));
    temp2 = sqrt(pow(Bx - Cx, 2) + pow(By - Cy, 2));
    cout << "Длина отрезка AB: " << temp1 << endl;
    cout << "Длина отрезка BC: " << temp2 << endl;
    cout << "Произведение отрезков AC и BC: " << temp1+temp2 << endl;
