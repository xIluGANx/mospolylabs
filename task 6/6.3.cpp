#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Russian");
    //Ввод A и В
    float A,B,C,a;
    cout<<"Введите A- ";
    cin>> A;
    cout<<"Введите B- ";
    cin>>B;
    cout<<"Введите С- ";
    cin>>C;
        
    //выполнение задачи
    a=A;A=B;B=a;
    a=C;C=B;B=a;
    
    cout<<"A="<<A<<endl;
    cout<<"B="<<B<<endl;
    cout<<"C="<<C;
    
}
