#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Russian");
    //Ввод A и В
    float x,y,temp,temp2;
    cout<<"Введите A- ";
    cin>> x;
    //выполнение задачи
    temp=x*x*x*x*x*x;
    y=temp*x*x;
    cout<<"Ans: "<<y;
}

