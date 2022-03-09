#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
//4

class Employee
{
private:
	int num;
	float salary;
public:
	Employee() : num(0), salary(0)
	{}
	Employee(int n, float s) : num(n), salary(s)
	{}
	void get()
	{
		cout << "Номер рабочего: " << endl;
		cin >> num;
		cout << "Зарплата: " << endl;
		cin >> salary;
	}
	void out()const
	{
		cout << "Рабочий номер: " << num << endl << "Зарплата: " << salary << endl;
	};
};
//5

class Date
{
private:
	char ch = '/';
	int dd, mm, yy;
public:
	Date() : dd(0), mm(0), yy(0)
	{}
	Date(int d, int m, int y) : dd(d), mm(m), yy(y)
	{}
	void get()
	{
		cout << "Введите дату в формате dd / mm / yy : " << endl;
		cin >> dd >> ch >> mm >> ch >> yy;
	}
	void out()const
	{
		cout << "Дата: " << dd << "/" << mm << "/" << yy;
	};
};
//6

class Date1 {
private:

public:
	int dd, mm, yy;
	Date1() : dd(0), mm(0), yy(0)
	{}
	Date1(int d, int m, int y) : dd(d), mm(m), yy(y)
	{}
};
class Employee1
{
private:
	int num;
	float salary;
	Date1 date;
	enum etype { laborer, secretary, manager, accountant, executive, researcher };
	etype a;
	char n;
public:
	Employee1() : num(0), salary(0)
	{}
	Employee1(int n, float s) : num(num), salary(s)
	{}
	void get()
	{
		char ch;
		cout << "Номер рабочего: ";
		cin >> num;
		cout << "Зарплата: " << endl;
		cin >> salary;
		cout << "Введите дату в формате dd / mm / yy : " << endl;
		cin >> date.dd >> ch >> date.mm >> ch >> date.yy;
		cout << "(laborer, secretary, manager, accountant, executive, researcher): ";
		cin >> n;
		switch (n)
		{
		case 'l':
			a = laborer;
		case 's':
			a = secretary;
		case 'm':
			a = manager;
		case 'a':
			a = accountant;
		case 'e':
			a = executive;
		case 'r':
			a = researcher;
		default:
			cout << "Неправильно введена буква: либо нет в списках, либо вписано больше 1q буквы";
		}

	}
	void out()const
	{
		cout << "Рабочий номер: " << num << endl << "Зарплата: " << salary << endl << "Дата принятия на работу: " << date.dd << "/" << date.mm << "/" << date.yy << endl;
		switch (a)
		{
		case 0:cout << "Полное название должности:laborer" << endl;
		case 1:cout << "Полное название должности:secretary" << endl;
		case 2:cout << "Полное название должности:manager" << endl;
		case 3:cout << "Полное название должности:accountant" << endl;
		case 4:cout << "Полное название должности:executive" << endl;
		case 5:cout << "Полное название должности:researcher" << endl;
		}
	};
};
//7

class angle {
private:
	int grad;
	float min;
	char compass;
public:

	angle() :grad(0), min(0), compass(0)
	{}
	angle(int g, float m, char c) :grad(g), min(m), compass(c)
	{}

	void get()
	{
		cout << "Градусы: "; cin >> grad;
		cout << "Минуты"; cin >> min;
		cout << "Направление (N, S, E, W)" << endl; cin >> compass;
	}
	void out()
	{
		cout << grad << '\xF8' << min << "'" << compass << endl;
	}

};

//8

class kolvo
{
private:
	int nom;
	static int kol;
public:
	kolvo()
	{
		kol++;
		nom = kol;
	}
	void out()
	{
		cout << "Номер: " << nom<< endl;
	}
};
int kolvo::kol = 0;
//9

class Fraction
{
 private:
  int numerator, denominator;
 public:
  Fraction() :numerator(0), denominator(0)
  {}
  Fraction(int num, int denom) : numerator(num), denominator(denom)
  {}
  char ch;
  void get()
  {
   cout << "enter fraction" << endl;
   cin >> numerator >> ch >> denominator;
  }
  void add(Fraction f1, Fraction f2)
  {
   numerator = f1.numerator * f2.denominator + f1.denominator * f2.numerator;
   denominator = f1.denominator * f2.denominator;
  }
  void disp()
  {
 cout << numerator << "/" << denominator << endl;
}
};
//10
class Ship
{
	private:
		int num;
		static int kolvo;
		int grad;
		float min;
		char compass;
	public:
		Ship() :num(0), grad(0), min(0), compass(0)
		{
			kolvo++;
			num = kolvo;
		}
		Ship(int num, int deg, float m, char d) : num(num), grad(deg), min(m), compass(d)
		{}
		void get()
		{
			cout << "Градусы: "; cin >> grad;
			cout << "Минуты"; cin >> min;
			cout << "Направление (N, S, E, W)" << endl; cin >> compass;
		}
		void out()
		{
			cout << "Номер: " << num << endl << "Градусы: " << grad <<endl << min << "'" << endl<<compass << endl;
		}
};
	int Ship::kolvo = 0;
//11
	class Fraction1
	{
	private:
		int numerator, denominator;
	public:
		Fraction1() :numerator(0), denominator(0)
		{}
		void get()
		{
			char ch;
			cout << "enter fraction" << endl;
			cin >> numerator >> ch >> denominator;
		}
		void add(Fraction1 a1, Fraction1 b1)
		{
			numerator = a1.numerator * b1.denominator + a1.denominator * b1.numerator;
			denominator = a1.denominator * b1.denominator;
		}
		void sub(Fraction1 a1, Fraction1 b2)
		{
			numerator = a1.numerator * b2.denominator - a1.denominator * b2.numerator;
			denominator = a1.denominator * b2.denominator;
		}
		void mul(Fraction1 a1, Fraction1 b1)
		{
			numerator = a1.numerator * b1.denominator;
			denominator = a1.denominator * b1.denominator;
		}
		void div(Fraction1 a1, Fraction1 b1)
		{
			numerator = a1.numerator * b1.denominator;
			denominator = a1.denominator * b1.numerator;
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
		void disp_fr()const
		{
			cout << numerator << "/" << denominator << endl;
		}
	};
//12
	class Fraction2
	{
	private:

	public:
		int num, denom;
		Fraction2() :num(0), denom(0)
		{}
		void mul(Fraction2 a, Fraction2 b)
		{
			num = a.num * b.num;
			denom= a.denom * b.denom;
		}
		void lowterms()
		{
			long tnum, tden, temp, gcd;
			tnum = labs(num);
			tden = labs(denom);
			if (tden == 0)
			{
				cout << "Недопустимый знаменатель!"; exit(1);
			}
			else if (tnum == 0)
			{
				num = 0; denom = 1; return;
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
			num = num / gcd;
			denom = denom / gcd;
		}
		void disp_fr()const
		{
			cout << setw(5) << num << "/" << denom;
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
			cout << " choose only  4or further";
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
			Employee a, b, c;
			a.get();
			b.get();
			c.get();
			a.out();
			b.out();
			c.out();
			break;
		}
		case 5:
			// // // // // // // // // // // //
		{
			Date d;
			d.get();
			d.out();
			break;
		}
		case 6:
			// // // // // // // // // // // //
		{
			Employee1 a, b, c;
			a.get();
			b.get();
			c.get();
			a.out();
			b.out();
			c.out();
			break;
		}
		case 7:
			// // // // // // // // // // // //
			{
				angle a1(179, 59.9, 'E');
				angle a2;
				char ch;
				a1.out();
				do
				{
					a2.get();
					a2.out();
					cout << "Повторить? (y/n)" << endl;
					cin >> ch;
				} while (ch != 'n');
				break;
			}
		case 8:
			// // // // // // // // // // // //
			{
				kolvo obj1, obj2, obj3;
				obj1.out();
				obj2.out();
				obj3.out();
				break;
			}
		case 9:
			// // // // // // // // // // // //
		{
			Fraction a1, a2, sum;
			char ch = 'y';
			do
			{
				a1.get();
				a2.get();
				sum.add(a1, a2);
				sum.disp();
				cout << "Идем дальше?";
				cin >> ch;

			} while (ch != 'n');
			break;
		}
		case 10:
			// // // // // // // // // // // //
		{
			Ship a1, a2, a3;
			a1.get();
			a2.get();
			a3.get();
			a1.out();
			a2.out();
			a3.out();
			break; 
		}
		case 11:
			// // // // // // // // // // // //
		{
			char oper;
			do
			{
				Fraction1 c, d, sum;
				c.get();
				cin >> oper;
				d.get();
				switch (oper)
				{
				case '+': sum.add(c, d); break;
				case '-': sum.sub(c, d); break;
				case '*': sum.mul(c, d); break;
				case '/': sum.div(c, d); break;
				}
				sum.lowterms();
				sum.disp_fr();
				cout << "repeat? (y/n)" << endl; cin >> oper;
			} while (oper != 'n');
			break;
		}
		case 12:
			// // // // // // // // // // // //
		{  
		Fraction2 a, b, c;
		a.denom = b.denom = num;
		cout << "Введи знаменатель:" << endl;
		cin >> num;
		for (int j = 1; j < num; j++)
		{
			a.num = j;
			a.denom = num;
			a.lowterms();
			a.disp_fr();
		}
		cout << endl;
		for (int i = 1; i < num; i++)
		{
			b.num= i;
			b.denom = num;
			b.lowterms();
			b.disp_fr();

			for (int j = 1; j < num; j++)
			{
				a.num = j;
				a.denom = num;
				c.mul(a, b);
				c.lowterms();
				c.disp_fr();
			}
			cout << endl;
		}
		break;
		}
		default:
			End = false;
			break;
		}
	}
	return 0;
}
