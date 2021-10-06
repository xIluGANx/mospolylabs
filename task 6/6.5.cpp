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
    y=(4*pow((x-3),6))-(7*pow((x-3),3))+2;
    cout<<"Ans: "<<y<<endl;
}
