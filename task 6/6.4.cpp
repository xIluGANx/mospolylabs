#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Russian");
    //Ввод A и В
    float x,y;
    cout<<"Введите x- ";
    cin>> x;
    //выполнение задачи
    y=(3*pow(x,6))-(6*pow(x,2))-7;
    cout<<"Ans: "<<y<<endl;
}
