#include<iostream>
#include<cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    // ввод координат точек A B C
    float Ax, Ay, Bx, By, Cx, Cy;
    float temp1, temp2, temp3;
    float p;

    cout << "введите координаты точек. "<<endl;
    cout << "x1 = ";
    cin >> Ax;
    cout << "y1 = ";
    cin >> Ay;
    cout << "x2 = ";
    cin >> Bx;
    cout << "y2 = ";
    cin >> By;
    cout << "x3 = ";
    cin >> Cx;
    cout << "y3 = ";
    cin >> Cy;
    
    // вычисление
    if (x1!=x2&x2!=x3&x1!=x3&y1!=y2&y2!=y3&y1!=y3){
    temp1 = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));
    temp2 = sqrt(pow(Bx - Cx, 2) + pow(By - Cy, 2));
    temp3 = sqrt(pow(Cx - Ax, 2) + pow(Cy - Ay, 2));
    p = (temp1 + temp2 + temp3) / 2;
    cout << "Периметр треугольника: " << temp1 + temp2 + temp3;
    cout << "Площадь треугольника: " << sqrt(p * (p - temp1) * (p - temp2) * (p - temp3));
    }
    else{
        cout<<"Ошибка. Некоторые из точек лежат на одной прямой"
    }
    }
