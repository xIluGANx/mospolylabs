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
    temp=pow(x,6);
    y=temp*x*x;
    cout<<"Ans: "<<y;
}


