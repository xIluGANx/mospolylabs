#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

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
		case 1:
		{//task1
			cout << "choose only 5 of further" << endl;
			break; }
		case 2:
		{//task2
			cout << "choose only 5 of further" << endl;
			break; }
		case 3:
		{//task3
			cout << "choose only 5 of further" << endl;
			break; }
		case 4:
		{//task4
			cout << "choose only 5 of further" << endl;
			break; }
		case 5:
			//task5
		{int a = 20;
		for (int i = 0; i < a; i++) {
			for (int z = a; z >= 0; z--) {
				if (z <= i) cout << "x";
				cout << ' ';
			}
			cout << endl;
		}
		break;
		}
		case 6:
			//task6
		{
			bool kon = true;
			unsigned int numb;
			unsigned long fact = 1;             //long for larger numbers

			while (kon) {
				cout << "Enter a number: ";
				cin >> numb;                      //get number  
				if (numb != 0) {
					for (int j = numb; j > 0; j--) {
						fact *= j;
						cout << "Factorial is " << fact << endl;
					}
				}
				else {
					kon = false;
				}
			}
			break;
		}
		case 7:
		{//task7
			float a, b, c;

			cout << "Введите начальный вклад: ";
			cin >> a;
			cout << "Введите число лет: ";
			cin >> b;
			cout << "Введите процентную ставку: ";
			cin >> c;
			for (int i = 0; i <= (int)b; i++) {

				cout << "В конце " << i << " года вы получите " << a << " + (" << a << "*" << c * 0.01 << ") =" << a + (a * (c * 0.01)) << " Долларов" << endl;
				a = a + (a * (c * 0.01));

			}
			cout << "Через " << b << " лет вы получите " << a << " Долларов" << endl;
			break; }
		case 8:
			//task8
		{

			bool kon = true;
			while (kon)
			{
				string yn;
				int funt, shill, pence, funt1, shill1, pence1, a, b, c;
				cout << "Введите первую сумму ";
				cin >> funt >> shill >> pence;
				cout << "Введите вторую сумму ";
				cin >> funt1 >> shill1 >> pence1;
				c = pence + pence1;
				b = shill + shill1;
				a = funt + funt1;
				if (c / 11 != 0) {
					c = c - (c / 11 * 11);
					b = b + (c / 11);
				}
				if (b / 19 != 0) {
					b = b - (b / 19 * 19);
					a = a + (b / 19);
				}
				cout << "Всего " << a << " " << b << " " << c << " ";

				cout << "Продолжить? y/n: ";
				cin >> yn;
				if (yn == "y") kon = true;
				if (yn == "n") kon = false;

			}

			cout << endl;
			break; }
		case 9:
			//task9
		{
			int a, b;
			int init = 1;
			cout << "Введите количество людей: ";
			cin >> a;
			cout << "Введите количество мест: ";
			cin >> b;
			for (int i = 0; i <= b - 1; i++) {
				init = init * a;
				cout << init;
				a--;
			}
			cout << "Число возможных рассадок: " << init << endl;
			break;
		}

		case 10:
			//task10
		{
			float a, b, c;
			int year = 0;
			cout << "Введите начальный вклад: ";
			cin >> a;
			cout << "Введите желаемую цену";
			cin >> b;
			cout << "Введите процентную ставку: ";
			cin >> c;
			float init = (float)a;
			while (init <= (float)b) {
				init = init + (a * (c * 0.01));
				year++;
			}
			cout << "Через " << year << " лет вы получите " << b << " Долларов" << endl;
			break;
		}
		case 11:
			//task11
		{
			bool kon = true;
			while (kon)
			{
				int funt, shill, pence, funt1, shill1, pence1, a, b, c, d;
				char oper;
				string yn;
				cout << "Введите операцию ";
				cin >> funt >> shill >> pence >> oper >> funt1 >> shill1 >> pence1;
				switch (oper) {
				case '+':
				{
					c = pence + pence1;
					b = shill + shill1;
					a = funt + funt1;
					if (c / 11 != 0) {
						c = c - (c / 11 * 11);
						b = b + (c / 11);
					}
					if (b / 19 != 0) {
						b = b - (b / 19 * 19);
						a = a + (b / 19);
					}
					cout << "Answer = " << a << " " << b << " " << c << endl;
					break;
				}
				case '-':
				{
					c = pence - pence1;
					b = shill - shill1;
					a = funt - funt1;
											if (c < 0) {
												c = c + 11;
												b = b - 1;
											}
											if (b < 0) {
												b = b + 19;
												a = a - 1;
											}
					cout << "Answer = " << a << " " << b << " " << c << endl;
					break;
				}
				case '*':
				{
					shill = shill + funt * 19;
					pence = pence + shill * 11;
					shill1 = shill1 + funt1 * 19;
					pence1 = pence1 + shill1 * 11;
					d = pence * pence1;
					c = d - (d / 11 * 11);
					b = c - (c / 19 * 19);
					a = d / 11 / 19;
					cout << "Answer = " << a << " " << b << " " << c << endl;
					break;
				}
				case '/':
				{
					if (funt != 0) shill = shill + funt * 19;
					else shill = shill;
					if (shill != 0) pence = pence + shill * 11;
					else pence = pence;
					if (funt1 != 0) shill1 = shill1 + funt1 * 19;
					else shill1 = shill1;
					if (shill1 != 0) pence1 = pence1 + shill1 * 11;
					else pence1 = pence1;
					cout << pence << endl;
					cout << pence1 << endl;
					d = pence / pence1;
					cout << d;
					c = d - (d / 11 * 11);
					b = c - (c / 19 * 19);
					a = d / 11 / 19;
					cout << "Answer = " << a << " " << b << " " << c << endl;
					break;
				}
				default: {a = 0; b = 0; c = 0; cout << "Answer = " << a << " " << b << " " << c << endl; break;}

				}
				cout << "Продолжить? y/n: ";
				cin >> yn;
				if (yn == "n")
				{
					kon = false;
				}
			}
		}
		case 12:
		{
			bool kon = true;
			while (kon)
			{
				float a,b,c,d;
				char oper;
				string yn;
				cout << "Введите операцию ";
				cin >> a >> b >> oper >> c >> d;
				switch (oper) {
				case '+':
				{
					cout << "Answer = " << (a * d + b * c) / (b * d);
					break;
				}
				case '-':
				{
					cout << "Answer = " << (a * d - b * c) / (b * d);
					break;
				}
				case '*':
				{
					cout << "Answer = " << (a * c) / (b * d);
					break;
				}
				case '/':
				{
					cout << "Answer = " << (a * d) / (b * c);
					break;
				}
				default:  {cout << "Answer = none";break; }

				}
				cout << "Продолжить? y/n: ";
				cin >> yn;
				if (yn == "n")
				{
					kon = false;
				}
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
