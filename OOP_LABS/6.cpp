#include <iostream>
#include <iomanip>
#include <math.h>
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
				cout << "Введи число: "<<endl; cin >> numbers[n++];
				cout << "\nContinue typing? "<<endl; cin >> ans;
			} while (ans != 'n');
			cout << "Большее число: " << numbers[maxint(numbers, n)] << endl<< "Индекс модуля: " << maxint(numbers, n) << endl;
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
		case 7:
			// // // // // // // // // // // //
		case 8:
			// // // // // // // // // // // //
		case 9:
			// // // // // // // // // // // //
		case 10:
			// // // // // // // // // // // //
		case 11:
			// // // // // // // // // // // //

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


