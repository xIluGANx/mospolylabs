#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Russian");
    //Ввод A и В
    float x,y,temp;
    cout<<"Введите A- ";
    cin>> x;
    //выполнение задачи
    temp=pow(x,2);
    y=pow(temp,2)*temp*temp;
    cout<<"Ans: "<<y;
}
