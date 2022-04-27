#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <process.h>
using namespace std;
//5
class Time
{
private:
	unsigned int hours, minutes, seconds;
public:
	Time() : hours(0), minutes(0), seconds(0)
	{}
	Time(unsigned int h, unsigned int m, unsigned int s) : hours(h), minutes(m), seconds(s)
	{}
	void display()const
	{
		cout << hours << ":" << minutes << ":" << seconds << endl;
	};
	Time operator + (Time t2)
	{
		long sumsec = (hours * 3600) + (minutes * 60) + seconds + (t2.hours * 3600) + (t2.minutes * 60) + t2.seconds;
		int h = sumsec / (60 * 60);
		int m = sumsec % (60 * 60) / 60;
		int s = sumsec % (60 * 60) % 60;
		return Time(h, m, s);
	}
	Time operator ++ ()
	{
		return Time(++hours, ++minutes, ++seconds);
	}
	Time operator -- ()
	{
		return Time(--hours, --minutes, --seconds);
	}
	Time operator ++ (int)
	{
		return Time(hours++, minutes++, seconds++);
	}
	Time operator -- (int)
	{
		return Time(hours--, minutes--, seconds--);
	}
};
//6
class Timee
{
private:
	unsigned int hours, minutes, seconds;
public:
	Timee() : hours(0), minutes(0), seconds(0)
	{}
	Timee(unsigned int h, unsigned int m, unsigned int s) : hours(h), minutes(m), seconds(s)
	{}
	void display()const
	{
		cout << hours << ":" << minutes << ":" << seconds << endl;
	};

	Timee operator + (Timee t2)
	{
		long totalsecs = (hours * 3600) + (minutes * 60) + seconds + (t2.hours * 3600) + (t2.minutes * 60) + t2.seconds;
		int h = totalsecs / (60 * 60);
		int m = totalsecs % (60 * 60) / 60;
		int s = totalsecs % (60 * 60) % 60;
		return Timee(h, m, s);
	}
	Timee operator - (Timee t2)
	{
		long totalsecs = ((hours * 3600) + (minutes * 60) + seconds) - ((t2.hours * 3600) + (t2.minutes * 60) + t2.seconds);
		int h = totalsecs / (60 * 60);
		int m = totalsecs % (60 * 60) / 60;
		int s = totalsecs % (60 * 60) % 60;
		return Timee(h, m, s);
	}
	Timee operator * (Timee t2)
	{
		long totalsecs = (hours * 3600) + ((minutes * 60) + seconds) * ((t2.hours * 3600) + (t2.minutes * 60) + t2.seconds);
		int h = totalsecs / (60 * 60);
		int m = totalsecs % (60 * 60) / 60;
		int s = totalsecs % (60 * 60) % 60;
		return Timee(h, m, s);
	}

	Timee operator ++ ()
	{
		return Timee(++hours, ++minutes, ++seconds);
	}
	Timee operator -- ()
	{
		return Timee(--hours, --minutes, --seconds);
	}
	Timee operator ++ (int)
	{
		return Timee(hours++, minutes++, seconds++);
	}
	Timee operator -- (int)
	{
		return Timee(hours--, minutes--, seconds--);
	}
};
//7
class Fraction
{
private:
	int numerator, denominator;
public:
	Fraction() :numerator(0), denominator(0)
	{}
	Fraction(int num, int denom) : numerator(num), denominator(denom)
	{}
	void get()
	{
		char ch;
		cout << "Введи числитель и знаменатель дроби через /" << endl;
		cin >> numerator >> ch >> denominator;
		if (numerator == 0 && denominator == 0)
		{
			if (numerator == 1 && denominator == 1)
			{
				if (numerator == 0 && denominator == 1)
				{
					cout << "Ошибка,поломалося!" << endl;
					exit(1);
				}
			}
		}
	}
	Fraction operator + (Fraction f2)
	{
		int num = numerator * f2.denominator + denominator * f2.numerator;
		int denom = denominator * f2.denominator;
		return Fraction(num, denom);
	}
	Fraction operator - (Fraction f2)
	{
		int num = numerator * f2.denominator - denominator * f2.numerator;
		int denom = denominator * f2.denominator;
		return Fraction(num, denom);
	}
	Fraction operator * (Fraction f2)
	{
		int num = numerator * f2.denominator;
		int denom = denominator * f2.denominator;
		return Fraction(num, denom);
	}
	Fraction operator / (Fraction f2)
	{
		int num = numerator * f2.denominator;
		int denom = denominator * f2.numerator;
		return Fraction(num, denom);
	}
	void lowterms()
	{
		long tnum, tden, temp, gcd;
		tnum = labs(numerator);            // используем неотрицательные
		tden = labs(denominator);            // значения (нужен cmath)
		if (tden == 0)              // проверка знаменателя на 0
		{
			cout << "Недопустимый знаменатель!"; exit(1);
		}
		else if (tnum == 0)         // проверка числителя на 0
		{
			numerator = 0; denominator = 1; return;
		}
		while (tnum != 0)
		{
			if (tnum < tden)          // если числитель больше знаменателя,
			{
				temp = tnum; tnum = tden; tden = temp;
			} //меняем их местами
			tnum = tnum - tden;        // вычитание
		}
		gcd = tden;                  // делим числитель и знаменатель на
		numerator = numerator / gcd;             // полученный наибольший общий делитель
		denominator = denominator / gcd;
	}
	void disp()const
	{
		cout << "Результат: ";
		cout << numerator << "/" << denominator << endl;
	}
};
//8
class bMone
{
private:
	string Mone;
	long double number;

public:
	bMone() : number(0)
	{}
	bMone(long double num)
	{
		number = num;
	}
	operator long double() const
	{
		long double num = number;
		return num;
	}
	void mstold()
	{
		cout << "Введите кол-во долларов в десятичном исчислении,обязательно поставьте знак $" << endl;
		getline(cin, Mone, '$');

		int wlen = Mone.length();
		int n = 0;
		string num;

		for (int j = 0; j < wlen; j++)
			if (Mone[j] != ',' && Mone[j] != '$')
				num.push_back(Mone[j]); ;
		number = stold(num);
	}
	bMone operator + (bMone mon2)
	{
		return number + mon2.number;
	}
	bMone operator - (bMone mon2)
	{
		return number - mon2.number;
	}
	bMone operator * (long double mon2)
	{
		return number * mon2;
	}
	bMone operator / (bMone mon2)
	{
		return number / mon2.number;
	}
	bMone operator / (long double mon2)
	{
		return number / mon2;
	}
	void disp()const
	{
		cout << setiosflags(ios::fixed)
			<< setiosflags(ios::showpoint)
			<< setprecision(2)
			<< "\n" << number << '$' << endl;
	}
};
//9
const int LIMIT = 100;
class safearray
{
private:
	int arr[LIMIT];
public:

	int& operator[](int n)
	{
		if (n < 0 || n >= LIMIT)
		{
			cout << "\nОшибочный индекс!"; exit(1);
		}
		return arr[n];
	}
};
//10
class Cartes;
class Polar;

class Cartes
{
private:
	double X;
	double Y;
public:
	Cartes() : X(0), Y(0)
	{}
	Cartes(double x, double y) : X(x), Y(y)
	{}
	Cartes(const Polar& pol);
	Cartes operator + (Cartes coord2)
	{
		double tempY = Y + coord2.Y;
		double tempX = X + coord2.X;
		return Cartes(tempX, tempY);
	}
	double get_X() const
	{
		return X;
	}
	double get_Y() const
	{
		return Y;
	}
};
class Polar
{
private:
	double corner;
	double radius;
public:
	Polar() : corner(0), radius(0)
	{}
	Polar(double cor, double rad) : corner(cor), radius(rad)
	{}
	Polar(const Cartes& cartes);
	void get()
	{
		cout << "Полярные координаты.\n Введи угол: " << endl;
		cin >> corner;
		if (corner < 0)
			if (corner > 360)
				exit(1);
		cout << "Введи радиус: " << endl;
		cin >> radius;
	}
	void disp() const
	{
		cout << "Вывод: " << endl
			<< "Угол: " << corner << endl
			<< "Радиус: " << radius << endl;
	}
	double get_corner() const
	{
		return corner;
	}
	double get_radius() const
	{
		return radius;
	}
};

Cartes::Cartes(const Polar& pol)
{
	double cor = pol.get_corner();
	double rad = pol.get_radius();
	X = rad * cos(cor);
	Y = rad * sin(cor);
}

Polar::Polar(const Cartes& cartes)
{
	double x = cartes.get_X();
	double y = cartes.get_Y();
	corner = tan(y / x);
	radius = hypot(x, y);
}
//11
class Sterling
{
private:
 long pound;
 int shill;
 int pence;

public:
 Sterling() : pound(0), shill(0), pence(0)
 {}
 Sterling(double funt)
 {
  pound = static_cast<long> (funt);
  long decimal = funt - pound;
  shill = static_cast <int> (decimal * 20);
  pence = static_cast<int>((funt - pound) * 240 - shill * 12);
 }
 Sterling(long po, int s, int pe) : pound(po), shill(s), pence(pe)
 {}
 void getSterling()
 {
  cout << "Введи фунты: "; cin >> pound;
  cout << "Введи шиллинги: "; cin >> shill;
  cout << "Введи пенсы: "; cin >> pence;
 }
 void putSterling() const
 {
  cout << "Вывод: J" << pound << "." << shill << "." << pence << endl;
 }
 Sterling operator + (Sterling str2)
 {
  int sumpens = (pound * 20 * 12 + shill * 12 + pence) + (str2.pound * 20 * 12 + str2.shill * 12 + str2.pence);
  long po = sumpens / (20 * 12);
  int s = sumpens % (20 * 12) / 12;
  int pe = sumpens % (20 * 12) % 12;
  return Sterling(po, s, pe);
 }
 Sterling operator - (Sterling str2)
 {
  int sumpens = (pound * 20 * 12 + shill * 12 + pence) - (str2.pound * 20 * 12 + str2.shill * 12 + str2.pence);
  long po = sumpens / (20 * 12);
  int s = sumpens % (20 * 12) / 12;
  int pe = sumpens % (20 * 12) % 12;
  return Sterling(po, s, pe);
 }
 Sterling operator * (double str2)
 {
  int sumpens = (pound * 20 * 12 + shill * 12 + pence) * (str2);
  long po = sumpens / (20 * 12);
  int s = sumpens % (20 * 12) / 12;
  int pe = sumpens % (20 * 12) % 12;
  return Sterling(po, s, pe);
 }
 Sterling operator / (Sterling str2)
 {
  int sumpens = (pound * 20 * 12 + shill * 12 + pence) / (str2.pound * 20 * 12 + str2.shill * 12 + str2.pence);
  long po = sumpens / (20 * 12);
  int s = sumpens % (20 * 12) / 12;
  int pe = sumpens % (20 * 12) % 12;
  return Sterling(po, s, pe);
 }
 Sterling operator / (double str2)
 {
  int sumpens = (pound * 20 * 12 + shill * 12 + pence) / (str2);
  long po = sumpens / (20 * 12);
  int s = sumpens % (20 * 12) / 12;
  int pe = sumpens % (20 * 12) % 12;
  return Sterling(po, s, pe);
 }
 operator double()
 {
  float sum = pence + shill * 12 + (pound * 20) * 12;
  double des_funt = (sum / 2.4) / 100;
  return des_funt;
 }
};
//11
class Ster;
class bMone;

class Ster
{
private:
	long pounds;
	int shilling;
	int pens;

public:
	Ster() : pounds(0), shilling(0), pens(0)
	{}
	Ster(long po, int s, int pe) : pounds(po), shilling(s), pens(pe)
	{}
	Ster(const bMonee& Mon);
	void getSterling()
	{
		cout << "Введи фунты: "; cin >> pounds;
		cout << "Введи шиллинги: "; cin >> shilling;
		cout << "Введи пенсы: "; cin >> pens;
	}
	void putSterling() const
	{
		cout << "Result: J" << pounds << "." << shilling << "." << pens << endl;
	}
	long get_pounds() const
	{
		return pounds;
	}
	int get_shilling() const
	{
		return shilling;
	}
	int get_pens() const
	{
		return pens;
	}
};

class bMonee
{
private:
	string strMon;
	long double number;

public:
	bMonee() : number(0)
	{}
	bMonee(const Sterling ster);
	void mstold()
	{
		cout << "Enter the amount in decimal point. End with a dollar sign" << endl;
		getline(cin, strMon, '$');

		int wlen = strMon.length();
		int n = 0;
		string num;

		for (int j = 0; j < wlen; j++)
			if (strMon[j] != ',' && strMon[j] != '$')
				num.push_back(strMon[j]); ;
		number = stold(num);
	}
	void display()const
	{
		cout << setiosflags(ios::fixed)
			<< setiosflags(ios::showpoint)
			<< setprecision(2)
			<< "\n" << number << '$' << endl;
	}
	long double get_number() const
	{
		return number;
	}
};

Ster::Ster(const bMonee& Mon)
{
	long double dollar = Mon.get_number();
	int sumpens = (dollar / 50) * 20 * 12;
	pounds = sumpens / (20 * 12);
	shilling = sumpens % (20 * 12) / 12;
	pens = sumpens % (20 * 12) % 12;
}
bMonee::bMonee(const Ster ster)
{
	long po = ster.get_pounds();
	int s = ster.get_shilling();
	int pe = ster.get_pens();
	number = (po * 50) + ((50 / 20) * s) + ((50 * 20 * 12) * pe);
}


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
			cout << " choose only 5 or further";
			break;
		}
		case 2:
			// // // // // // // // // // // //
		{
			cout << " choose only 5 or further";
			break;
		}
		case 3:
			// // // // // // // // // // // // 
		{
			cout << " choose only 5 or further";
			break;
		}
		case 4:
			// // // // // // // // // // // //
		{
			cout << " choose only 5 or further";
			break;
		}
		case 5:
			// // // // // // // // // // // //
			{
				Time time_1(5, 5, 32), time_2(2, 5, 3);
				Time sum, temp;
				sum = time_1 + time_2;
				time_1.display();
				time_2.display();
				sum.display();
				++sum;
				sum.display();
				--sum;
				sum.display();
				temp = sum++; 
				temp.display();
				temp = sum--; 
				temp.display();
				break;
			}
		case 6:
			// // // // // // // // // // // //
		{
			Timee time_1(5, 5, 32), time_2(2, 5, 3);
			Timee sum, temp;
			sum = time_1 + time_2;
			time_1.display();
			time_2.display();
			sum.display();
			++sum; 
			sum.display();
			--sum; 
			sum.display();
			temp = sum++;
			temp.display();
			temp = sum--;
			temp.display();
			sum = time_1 - time_2; 
			sum.display();
			sum = time_1 * time_2;
			sum.display();
			break;
		}
		case 7:
			// // // // // // // // // // // //
		{
			char yn;
			do
			{
				Fraction fr1, fr2, fr_sum;
				fr1.get();
				cout << "Что делаем с дробями? Введи знак" << endl; cin >> yn;
				fr2.get();

				switch (yn)
				{
				case '+': fr_sum = fr1 + fr2; break;
				case '-': fr_sum = fr1 - fr2; break;
				case '*': fr_sum = fr1 * fr2; break;
				case '/': fr_sum = fr1 / fr2; break;
				}
				fr_sum.lowterms();
				fr_sum.disp();
				cout << "Повторим? (y/n)" << endl; cin >> yn;
			} while (yn != 'n');
			break;
		}
		case 8:
			// // // // // // // // // // // //
		{
			bMone money1, money2, moneysum;
			long double num = 0;
			do
			{
				money1.mstold();
				money2.mstold();
				moneysum = money1 + money2; 
				moneysum.disp();
				moneysum = money1 - money2; 
				moneysum.disp();
				num = money2;
				moneysum = money1 * num; 
				moneysum.disp();
				moneysum = money1 / money2; 
				moneysum.disp();
				moneysum = money1 / num; 
				moneysum.disp();
				cout << "\nПовторим?" << endl;
				cin.get();
			} while (cin.get() != 'n');
			break;
		}
		case 9:
			// // // // // // // // // // // //
		{
			safearray a1;
			int up, down, down2, diff = 0;
			cout << "Введи максимальное количество в массиве" << endl; cin >> up;
			cout << "Введи минимальное количество в массиве" << endl; cin >> down;
			diff = up - 100;
			down2 = down;
			for (int i = down - diff; i < up - diff; i++)
				a1[i] = (down2++) * 10;

			for (int i = down - diff; i < up - diff; i++)
			{
				int temp = a1[i];
				cout << "Элемент " << down++ << " равен " << temp << endl;
			}
			break;
		}
		case 10:
			// // // // // // // // // // // //
		{
			Polar coordinate1, coordinate2, result_c;
			Cartes cord1, cord2, result;
			coordinate1.get();
			coordinate2.get();
			cord1 = coordinate1;
			cord2 = coordinate2;
			result = cord1 + cord2;
			result_c = result;
			result_c.disp();
			system("pause");
			return 0;
		}
		case 11:
			// // // // // // // // // // // //
		{
			Sterling s1, s2, sum;
			double decimal;
			cout << "Enter decimal pounds" << endl;
			cin >> decimal;
			s1.getSterling();
			s2.getSterling();
			sum = s1 + s2; sum.putSterling();
			sum = s1 - s2; sum.putSterling();
			sum = s1 * decimal; sum.putSterling();
			sum = s1 / s2; sum.putSterling();
			sum = s1 / decimal; sum.putSterling();
			decimal = sum; cout << decimal << endl;
			system("pause");
		};
		case 12:
			// // // // // // // // // // // //
		{
			Ster ster, res;
			bMonee dollars, resd;
			ster.getSterling();
			dollars.mstold();
			res = dollars;
			resd = ster;
			res.putSterling();
			resd.display();
			system("pause");
		};

		default:
			End = false;
			break;
		}
	}
	return 0;
}
