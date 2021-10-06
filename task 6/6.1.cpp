#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Russian");
    //Ввод A и В
    float A,B,c;
    cout<<"Введите A- ";
    cin>> A;
    cout<<"Введите B- ";
    cin>>B;
    //выполнение задачи
    c=A;
    A=B;
    B=c;
    cout<<"A="<<A<<endl;
    cout<<"B="<<B;
    
}
