#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <sstream>
#include <algorithm>
#include <string>
using namespace std;
//5
class Fraction
{
private:
 int numerator, denominator;
public:
 Fraction() :numerator(0), denominator(0)
 {}
 void get()
 {
  char ch;
  cout << "Введите дробь- числитель, потом знаменатель" << endl;
  cin >> numerator >> ch >> denominator;
 }
 void add(Fraction a1, Fraction b1)
 {
  numerator = a1.numerator * b1.denominator + a1.denominator * b1.numerator;
  denominator = a1.denominator * b1.denominator;
 }
 void mul(Fraction f1, int n)
 {
  denominator = f1.denominator * n;
 }

 void lowterms()
 {
  long tnum, tden, temp, gcd;
  tnum = labs(numerator);
  tden = labs(denominator);
  if (tden == 0)
  {
   cout << "Недопустимый знаменатель!"; exit(1);
  }
  else if (tnum == 0)
  {
   numerator = 0; denominator = 1; return;
  }
  while (tnum != 0)
  {
   if (tnum < tden)
   {
    temp = tnum; tnum = tden; tden = temp;
   }
   tnum = tnum - tden;
  }
  gcd = tden;
  numerator = numerator / gcd;
  denominator = denominator / gcd;
 }
 void out()const
 {
  cout << "\nСреднее " << numerator << "/" << denominator << endl;
 }
};
//6
enum Suit { clubs, diamonds, hearts, spades };
// от 2 до 10 обычные числа
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;
/////////////////////////////////////////////////////////////
class card
{
private:
 int number;
 Suit suit;
public:
 card() // конструктор
 { }
 void set(int n, Suit s) // установка значения
 {
  suit = s; number = n;
 }
 void display(); // показ карты
};
/////////////////////////////////////////////////////////////
void card::display()
{
 if (number >= 2 && number <= 10)
  cout << number;
 else
 {
  switch (number)
  {
  case jack: cout << 'J'; break;
  case queen: cout << 'Q'; break;
  case king: cout << 'K'; break;
  case ace: cout << 'A'; break;
  }
 }
 switch (suit)
 {
 case clubs: cout << static_cast<char>(5); break;
 case diamonds: cout << static_cast<char>(4); break;
 case hearts: cout << static_cast<char>(3); break;
 case spades: cout << static_cast<char>(6); break;
 }
}
//7
class Money
{
private:
 string mone;
 long double sum;
public:
 long double mstold()
 {
  cout << "Введите кол-во долларов в десятичном исчислении,обязательно поставьте знак $" << endl;
  getline(cin, mone, '$');

  int wlen = mone.length();
  int n = 0;
  string number;

  for (int j = 0; j < wlen; j++)
   if (mone[j] != ',' && mone[j] != '$')
    number.push_back(mone[j]); ;
  sum = stold(number);
  return sum;
 }
 void display()const
 {
  cout << setiosflags(ios::fixed)
   << setiosflags(ios::showpoint)
   << setprecision(2)
   << endl << sum << endl;
 }
};
//8
const int lim = 100;

class Safearay
{
private:
 int array[lim];
public:
 void put(int n, int temp)
 {
  if ( n<0 || n>lim - 1)
  {
   cout << "Ошибка! Массив перегружен!" << endl;
   system("pause");
   exit(1);
  }
  array[n] = temp;
 }
 int get(int n)
 {
  if (n<0 || n>lim - 1)
  {
   cout << "Ошибка!Массив перегружен!" << endl;;
   system("pause");
   exit(1);
  }
  return array[n];
 }
};
//9

class Queue
{
private: 
    enum { max = 10 }; // немного нестандартный синтаксис
    int st[max];       // стек в виде массива
    int head;
    int tail;           // вершина стека
public:

    Queue()            // конструктор
    {

       head = tail = 0;
    }
    void put(int var) // поместить в стек
    {
        st[tail++] = var;
        if(head > 0) head--;

    }
    int get()          // взять из стека
    {
        if(tail > 0)tail--;
        return st[head++];

    }
};
//10

const int LIM = 10;

class Matrix
{
private:
 int array [10] [10];

public:
 int rows, colums;
 Matrix(int r, int k) :  rows(r), colums(k)
  {}

 void putel(int r, int k, int temp)
 {
  if (r<0  r>LIM-1  k<0 || k>LIM-1)
  {
  cout << "Ошибка! Массив перегружен!" << endl;
   system ("pause");
   exit(1);
  }
  array[r][k] = temp;
 }
 int getel(int r, int k)
 {
  if (r<0  r>LIM-1  k<0 || k>LIM-1)
  {
   cout << "Ошибка! Массив перегружен!" << endl;
	  system ("pause");
   exit(1);
  }
  return array[r][k];
 }
};
//11

class Monee
{
protected:
    long double value; //значение с десятичной точкой
    long long   ipart; //значение без десятичной точки, первая часть выражения до точки
    long double fpart; //значение с десятичной точкой, вторая часть выражения, после точки
    string result; //строка
public:
    Monee() //конструктор
 {
        value = 0;
        ipart = 0;
        fpart = 0;
    }
    bool getmone() //получение значения
    {
        bool bFlag = false;
        cout << "введи число c десятичным значением" << endl;
        if ( !(cin >> value) || cin.get() != '\n' )
            cout<<"ошибка ввода!"<<endl;
        else
        if( bFlag = true )
        {
            ipart = long long(value);
            fpart = value - ipart;
        }
        cin.clear(); //очистка буфера
        cin.sync(); //сброс флага ошибки
        return bFlag;
    }
    string ldtoms()
    {
        int i, j;
        string ibuffer; //строка
        string fbuffer; //строка
        stringstream is; //строковая операция ввода
        stringstream fs;
        result = "err";
        if( is<<fixed<<ipart )
        if( is>>ibuffer )
        if( fs<<fixed<<fpart )
        if( fs>>fbuffer )
        {
            result = "";
            reverse(ibuffer.begin(), ibuffer.end()); //переворот строки
            for( i = 0; i < ibuffer.size(); i += 3 )
            {
                for( j = 0; j < 3 && i + j < ibuffer.size(); j++ )
                    result += ibuffer[i + j];
                result += " ";
            }
            reverse(result.begin(), result.end());
            result  = "$" + result + ".";
            fbuffer.erase(0, 1);
            fbuffer.erase(0, 1);
            result += fbuffer;

        }
        return result;
    }
};
//12

class bMone
{
private:
    string strMone;
    long double number;
 
public:
 bMoney() : number(0)
 {}
    void mstold()
    {
        cout << "Введи число с десятичным  " << endl;
        getline(cin, strMone, '$');

        int wlen = strMon.length();
        int n=0;
        string num;

        for (int j = 0; j < wlen; j++)
   if (strMon[j] != ',' && strMon[j] != '$')
                num.push_back(strMon[j]); ;
        number = stold(num);  
 }
 void madd (bMoney mon1, bMoney mon2)
 {
  number = mon1.number + mon2.number;
 }
    void display()const
    {
        cout << setiosflags (ios::fixed)
   << setiosflags (ios::showpoint)
   <<setprecision(2)
   << "\n" << number << '$' << endl;
    }
};


int main()
{
 setlocale(LC_ALL, "ru");
 bool End = true;
 int num;
 //switch cases
 while (End)
 {
  cout << "Choose number of task(0 if u want to exit):";
  cin >> num;
  switch (num)
  {
   // задания. каждый кейс соответствует номеру задачи
  case 1:
   // // // // // // // // // // // //
  {
   cout << " choose only 4 or further";
   break;
  }
  case 2:
   // // // // // // // // // // // //
  {
   cout << " choose only 4 or further";
   break;
  }
  case 3:
   // // // // // // // // // // // // 
  {
   cout << " choose only 4 or further";
   break;
  }
  case 4:
   // // // // // // // // // // // //
  {
   int maxint(int[], int);
   int numbers[100];
   int n = 0;
   char ans;
   do
   {
    cout << "Введи число: " << endl; cin >> numbers[n++];
    cout << "\nContinue typing? " << endl; cin >> ans;
   } while (ans != 'n');
   cout << "Большее число: " << numbers[maxint(numbers, n)] << endl << "Индекс модуля: " << maxint(numbers, n) << endl;
  }
  case 5:
   // // // // // // // // // // // //
  {
   Fraction fraction[100];
   Fraction frtemp, frsum;
   char ans;
   int n = 0;
   do
   {
    fraction[n++].get();
    cout << "Продолжить? (y/n)" << endl; cin >> ans;
   } while (ans != 'n');
   for (int i = 0; i < n; i++)
   {
    frtemp.add(fraction[i], fraction[i++]);
    i++;
    frsum.add(frtemp, frsum);
   }
   frsum.mul(frsum, n + 1);

   frsum.out();
  }
  case 6:
   // // // // // // // // // // // //
  {
   card deck[52];
   card deck1[13];
   card deck2[13];
   card deck3[13];
   card deck4[13];
   int j;
   cout << endl;
for (j = 0; j < 52; j++) // создаем упорядоченную колоду карт
   {
    int num = (j % 13) + 2;
    Suit su = Suit(j / 13);
    deck[j].set(num, su);
   }
   // показываем исходную колоду
   cout << "Исходная колода:\n";
   for (j = 0; j < 52; j++)
   {
    deck[j].display();
    cout << " ";
    if (!((j + 1) % 13)) // начинаем новую строку после каждой 13-й карты
     cout << endl;
   }
   srand(time(NULL)); // инициализируем генератор случайных чисел
   for (j = 0; j < 52; j++)
   {
    int k = rand() % 52; // выбираем случайную карту
    card temp = deck[j]; // и меняем ее с текущей
    deck[j] = deck[k];
    deck[k] = temp;
   }
   //Разделяем колоду на 4 части
   for (j = 0; j < 52; j++) 
   {
    int a = (j+1) % 13;
    cout << "\n номер карты в колодах" << a << endl;
    if (j <= 13)deck1[a] = deck[j];
    if (j <= 26 and j>13)deck2[a] = deck[j];
    if (j <= 39 and j>26)deck3[a] = deck[j];
    if (j <= 52 and j>39)deck4[a] = deck[j];
   }
   // показываем перемешанную колоду
   cout << "\nПеремешанная колода:\n";
   for (j = 0; j < 52; j++)
   {
    int a = j % 13;
    //вывод колоды 1
    if (j == 0) cout << "\nКолода 1: ";
    if (j<=13) { deck1[a].display(); cout << " "; }
    //вывод колоды 2
    if (j == 14) cout << "\nКолода 2: ";
    if (j <= 26 and j > 13) { deck2[a].display(); cout << " "; }
    //вывод колоды 3
    if (j == 27) cout << "\nКолода 3: ";
    if (j <= 39 and j >26) { deck3[a].display(); cout << " "; }
    //вывод колоды 4
    if (j == 40) cout << "\nКолода 4: ";
    if (j <= 52 and j >39) { deck2[a].display(); cout << " "; }
   }
   break;
  }
  case 7:
   // // // // // // // // // // // //
  {    Money mone;
  mone.mstold();
  mone.display();
  break; }
  case 8:
   // // // // // // // // // // // //
   {
    Safearay sal;
    int temp = 12345;
    sal.put (7, temp);
    temp = sal.get (7);
    cout << temp << endl;
    system ("pause");
    break;
   }
  case 9:
   // // // // // // // // // // // //
   {
     Queue s1;

     s1.put(11);
     s1.put(22);
     cout << "1: " << s1.get() << endl;
     cout << "2: " << s1.get() << endl;

     s1.put(33);
     s1.put(44);
     s1.put(55);
     s1.put(66);
     cout << "3: " << s1.get() << endl;
     cout << "4: " << s1.get() << endl;
     cout << "5: " << s1.get() << endl;
     cout << "6: " << s1.get() << endl;
     cin.get();
      break;
   }
  case 10:
   // // // // // // // // // // // //
   {
    Matrix m1 (3,4);
    int temp = 12345;
    m1.putel (7, 4, temp);
    temp = m1.getel (7, 4);
    cout << temp << endl;
    break;
   }
  case 11:
   // // // // // // // // // // // //
   {
      Monee money;
       while( true )
        {
            money.getmone();
            cout<<"ldoms : "<<money.ldtoms()<<endl;
            system ("pause");
        }
      break;
   }

  case 12:
   // // // // // // // // // // // //
  default:
   End = false;
   break;
  }
 }
 return 0;
}
//4
int maxint(int num[], int n)
{
 int max = 0, index = 0;

 for (int j = 0; j < n; ++j)
 {
  if (num[j] > max)
  {
   max = num[j];
   index = j;
  }
 }
 return index;
}
