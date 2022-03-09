#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
//void 5
long hms_to_secs(int h, int m, long s);
//void 6
long time_to_secs(int h, int m, long s);
int secs_to_time(int h, int m, long s);
//struct 6
struct timee {
	int seconds, minutes, hours;
};
//void 7
double power(double n, int p = 2);
double power(char n, int p = 2);
double power(int n, int p = 2);
double power(long n, int p = 2);
double power(float n, int p = 2);
//enum 7
enum type{dou,cha,in,lon,floa};
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
			bool kon = true;
			while (kon)
			{
			int a, b,l;
			string yn;
			long c;
			cout << "Введите часы: ";
			cin >> a;
			cout << "Введите минуты: ";
			cin >> b;
			cout << "Введите секунды: ";
			cin >> c;
			c=hms_to_secs(a, b, c);
			cout << "всего секунд : " << c << endl;
			cout << "Продолжить? y/n: ";
			cin >> yn;
			if (yn == "n")
			{
				kon = false;
			}

			}
			break;
		}
		case 6:
			// // // // // // // // // // // //
		{
			timee t1;
			long c;
			int z;
			cout << "1 - time to secs, 2 - secs to time , 0 - exit :";
			cin >> z;
			switch (z) {
			case 1:
			{
				cout << "Введите часы: ";
				cin >> t1.hours;
				cout << "Введите минуты: ";
				cin >> t1.minutes;
				cout << "Введите секунды: ";
				cin >> t1.seconds;
				c =(long)t1.seconds;
				time_to_secs(t1.hours, t1.minutes , c);
				cout << "всего секунд : " << c << endl;
				break;
			}
			case 2: 
			{
				cout << "Введите секунды: ";
				cin >> c;
				t1.seconds = (int)c;
				t1.hours = 0;
				t1.minutes = 0;
				cout << "Время: ";
				secs_to_time(t1.hours, t1.minutes, t1.seconds);
				cout << endl;
				break;
			}
			default:break;
			}
			break;
		}
		}
		case 7:
			// // // // // // // // // // // //
		{
			double answer;
			int pow;
			char yeserno;
			char m;
			type nom;
			cout << "какого типа переменная? первая буква: ";
			cin >> m;
				switch (m) {
				case 'd':
					nom = dou;
				case 'c':
					nom = cha;
				case 'i':
					nom = in;
				case 'l':
					nom = lon;
				case 'f':
					nom = floa;
				default:
					break;
				};
				switch (nom)
				{
				case dou:{
					double number;
					cout << "введите число:";//get number
					cin >> number;
					cout << "будете вводить степень (y/n)? ";
					cin >> yeserno;
					if (yeserno == 'y')//пользователю нужен не квадрат числа?
					{
						cout << "ведите степень: ";
						cin >> pow;
						answer = power(number, pow);//возвести число в степень 
					}
					else answer = power(number);//квадрат числа   

					cout << "ответ " << answer << endl;

					break; }

				case cha: {
					char number;
					cout << "введите число:";//get number
					cin >> number;
					cout << "будете вводить степень (y/n)? ";
					cin >> yeserno;
					if (yeserno == 'y')//пользователю нужен не квадрат числа?
					{
						cout << "ведите степень: ";
						cin >> pow;
						answer = power(number, pow);//возвести число в степень 
					}
					else answer = power(number);//квадрат числа   

					cout << "ответ " << answer << endl;

					break; }
				case in:
				{
					int number;
					cout << "введите число:";//get number
					cin >> number;
					cout << "будете вводить степень (y/n)? ";
					cin >> yeserno;
					if (yeserno == 'y')//пользователю нужен не квадрат числа?
					{
						cout << "ведите степень: ";
						cin >> pow;
						answer = power(number, pow);//возвести число в степень 
					}
					else answer = power(number);//квадрат числа   

					cout << "ответ " << answer << endl;

					break; }

				case lon:
				{
					long number;
					cout << "введите число:";//get number
					cin >> number;
					cout << "будете вводить степень (y/n)? ";
					cin >> yeserno;
					if (yeserno == 'y')//пользователю нужен не квадрат числа?
					{
						cout << "ведите степень: ";
						cin >> pow;
						answer = power(number, pow);//возвести число в степень 
					}
					else answer = power(number);//квадрат числа   

					cout << "ответ " << answer << endl;

					break; }
				case floa:
				{
					double float;
					cout << "введите число:";//get number
					cin >> number;
					cout << "будете вводить степень (y/n)? ";
					cin >> yeserno;
					if (yeserno == 'y')//пользователю нужен не квадрат числа?
					{
						cout << "ведите степень: ";
						cin >> pow;
						answer = power(number, pow);//возвести число в степень 
					}
					else answer = power(number);//квадрат числа   

					cout << "ответ " << answer << endl;

					break; }
				default:
					break;
				}
				break;
		}
		case 8:
			// // // // // // // // // // // //
		{
			cout << " choose only 5 or further";
			break;
		}
		case 9:
			// // // // // // // // // // // //
		{
			cout << " choose only 5 or further";
			break;
		}
		case 10:
			// // // // // // // // // // // //
		{
			cout << " choose only 5 or further";
			break;
		}
		case 11:
			// // // // // // // // // // // //
		{
			cout << " choose only 5 or further";
			break;
		}
		case 12:
			// // // // // // // // // // // //
		{
			cout << " choose only 5 or further";
			break;
		}
		default:
			End = false;
			break;
		}
	}
	return 0;
}
//5 ------------------------------------
long hms_to_secs(int h, int m, long s)
{
	s = h * 3600 + m * 60 + s;
	return s;
}
//6 --------------------------------------

long time_to_secs(int h, int m, long s)
{
	s = h * 3600 + m * 60 + s;
	return s;
}

int secs_to_time(int h, int m, long s)
{
	h = s / 3600;
	m = (s / 60) - (s / 3600 * 60);
	s = s - (s / 60 * 60);
	cout << h << ':' << m << ':' << s;
	return 0;
}
//7 ------------------------------------
double power(double n, int p)
{
	double result = 1.0;//начать с 1                      
	for(int j=0;j<p;j++)//умножить на n                 
	result *=n;//p раз                    
	return result;
}
double power(char n, int p)
{
	double result = 1.0;//начать с 1                      
	for (int j = 0; j < p; j++)//умножить на n                 
		result *= n;//p раз                    
	return result;
}
double power(int n, int p)
{
	double result = 1.0;//начать с 1                      
	for (int j = 0; j < p; j++)//умножить на n                 
		result *= n;//p раз                    
	return result;
}
double power(long n, int p)
{
	double result = 1.0;//начать с 1                      
	for (int j = 0; j < p; j++)//умножить на n                 
		result *= n;//p раз                    
	return result;
}
double power(float n, int p)
{
	double result = 1.0;//начать с 1                      
	for (int j = 0; j < p; j++)//умножить на n                 
		result *= n;//p раз                    
	return result;
}
