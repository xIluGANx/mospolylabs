#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Russian");
    //Ввод A и В
    float A,B,C,c;
    cout<<"Введите A- ";
    cin>> A;
    cout<<"Введите B- ";
    cin>>B;
    cout<<"Введите С- ";
    cin>>C;
        
    //выполнение задачи
    c=A;
    A=B;
    B=c;
    c=B;
    B=C;
    C=c;
    c=C;
    C=A;
    A=c;
    cout<<"A="<<A<<endl;
    cout<<"B="<<B<<endl;
    cout<<"C="<<C;
    
}
