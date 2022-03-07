#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
using namespace std;


//struct 4
struct employee {
	int sotr;
	float dollars;
};
// struct 5
struct date {
	int d, y, m;
};
// struct 6
enum etype { laborer, secretary, manager, accountant, executive, researcher };
// struct 7
struct employeee {
	int sotr, d, y, m;
	float dollars;
	etype a;
};
// struct 7
struct fraction {
	int a, b;
};
// struct 9
struct timee {
	int seconds, minutes, hours;
};
//struct 10
struct sterling {
	int pounds, shillings, pence;
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
			employee u1, u2, u3;
			cout << "Введите номер и доллары сотрудника 1: ";
			cin >> u1.sotr >> u1.dollars;
			cout << "Введите номер и доллары сотрудника 2: ";
			cin >> u2.sotr >> u2.dollars;
			cout << "Введите номер и доллары сотрудника 3: ";
			cin >> u3.sotr >> u3.dollars;
			cout << "Введенные данные:" << endl;
			cout << "No." << u1.sotr << " Dollars: " << u1.dollars;
			cout << "No." << u2.sotr << " Dollars: " << u2.dollars;
			cout << "No." << u3.sotr << " Dollars: " << u3.dollars;
			break;
		}
		case 5:
			// // // // // // // // // // // //
		{
			int d, m, y;
			char slash;
			cout << " Введите дату в формате dd/mm/yy : ";
			cin >> d >> slash >> m >> slash >> y;
			date l;
			l.d = d;
			l.m = m;
			l.y = y;
			cout << "Дата: " << l.d << "/" << l.m << l.y;
			break;
		}
		case 6:
			// // // // // // // // // // // //
		{
			etype a;
			char n;
			cout << "(laborer, secretary, manager, accountant, executive, researcher): ";
			cin >> n;
			switch (n) {
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
			switch (a) {
			case 0:cout << "Полное название должности:laborer";
			case 1:cout << "Полное название должности:secretary";
			case 2:cout << "Полное название должности:manager";
			case 3:cout << "Полное название должности:accountant";
			case 4:cout << "Полное название должности:executive";
			case 5:cout << "Полное название должности:researcher";
			}
			break;
		}
		case 7:
			// // // // // // // // // // // //
		{
			employeee u1, u2, u3;
			char n;
			char slash;
			// сотрудник один
			cout << "Введите номер и доллары сотрудника 1: ";
			cin >> u1.sotr >> u1.dollars;
			cout << " Введите дату принятия на работу сотрудника в формате dd/mm/yy : ";
			cin >> u1.d >> slash >> u1.m >> slash >> u1.y;
			cout << " введите первую букву должности сотрудника : ";
			cin >> n;
			switch (n) {
			case 'l':
				u1.a = laborer;
			case 's':
				u1.a = secretary;
			case 'm':
				u1.a = manager;
			case 'a':
				u1.a = accountant;
			case 'e':
				u1.a = executive;
			case 'r':
				u1.a = researcher;
			default:
				cout << "Неправильно введена буква: либо нет в списках, либо вписано больше 1q буквы";
			}
			// сотрудник два
			cout << "Введите номер и доллары сотрудника 1: ";
			cin >> u2.sotr >> u2.dollars;
			cout << " Введите дату принятия на работу сотрудника в формате dd/mm/yy : ";
			cin >> u2.d >> slash >> u2.m >> slash >> u2.y;
			cout << " введите первую букву должности сотрудника : ";
			cin >> n;
			switch (n) {
			case 'l':
				u2.a = laborer;
			case 's':
				u2.a = secretary;
			case 'm':
				u2.a = manager;
			case 'a':
				u2.a = accountant;
			case 'e':
				u2.a = executive;
			case 'r':
				u2.a = researcher;
			default:
				cout << "Неправильно введена буква: либо нет в списках, либо вписано больше 1q буквы";
			}
			//cотрудник три
			cout << "Введите номер и доллары сотрудника 1: ";
			cin >> u3.sotr >> u3.dollars;
			cout << " Введите дату принятия на работу сотрудника в формате dd/mm/yy : ";
			cin >> u3.d >> slash >> u3.m >> slash >> u3.y;
			cout << " введите первую букву должности сотрудника : ";
			cin >> n;
			switch (n) {
			case 'l':
				u3.a = laborer;
			case 's':
				u3.a = secretary;
			case 'm':
				u3.a = manager;
			case 'a':
				u3.a = accountant;
			case 'e':
				u3.a = executive;
			case 'r':
				u3.a = researcher;
			default:
				cout << "Неправильно введена буква: либо нет в списках, либо вписано больше 1q буквы";
			}
			//вывод сотр 1
			cout << "Сотрудник 1:" << endl;
			cout << "Номер: " << u1.sotr << " Количество Долларов: " << u1.dollars << " Дата принятия: " << u1.d << "/" << u1.m << "/" << u1.y << endl;
			switch (u1.a) {
			case 0:cout << "Полное название должности:laborer" << endl;
			case 1:cout << "Полное название должности:secretary" << endl;
			case 2:cout << "Полное название должности:manager" << endl;
			case 3:cout << "Полное название должности:accountant" << endl;
			case 4:cout << "Полное название должности:executive" << endl;
			case 5:cout << "Полное название должности:researcher" << endl;
			}
			//вывод сотр 2
			cout << "Сотрудник 2:" << endl;
			cout << "Номер: " << u2.sotr << " Количество Долларов: " << u2.dollars << " Дата принятия: " << u2.d << "/" << u2.m << "/" << u2.y << endl;
			switch (u2.a) {
			case 0:cout << "Полное название должности:laborer" << endl;
			case 1:cout << "Полное название должности:secretary" << endl;
			case 2:cout << "Полное название должности:manager" << endl;
			case 3:cout << "Полное название должности:accountant" << endl;
			case 4:cout << "Полное название должности:executive" << endl;
			case 5:cout << "Полное название должности:researcher" << endl;
			}
			// вывод сотр 3
			cout << "Сотрудник 2:" << endl;
			cout << "Номер: " << u3.sotr << " Количество Долларов: " << u3.dollars << " Дата принятия: " << u3.d << "/" << u3.m << "/" << u3.y << endl;
			switch (u3.a) {
			case 0:cout << "Полное название должности:laborer" << endl;
			case 1:cout << "Полное название должности:secretary" << endl;
			case 2:cout << "Полное название должности:manager" << endl;
			case 3:cout << "Полное название должности:accountant" << endl;
			case 4:cout << "Полное название должности:executive" << endl;
			case 5:cout << "Полное название должности:researcher" << endl;
			}

			break;
		}
		case 8:
			// // // // // // // // // // // //
		{
			fraction a, b;
			char oper;
			string yn;
			cout << "Введите операцию ";
			cin >> a.a >> oper >> a.b >> oper >> b.a >> oper >> b.b;
			cout << "Answer = " << (a.a * b.b + a.b * b.a) / (a.b * b.b);
			break;
		}
		case 9:
			// // // // // // // // // // // //
		{
			timee t1;
			cout << " Введите секунды: ";
			cin >> t1.seconds;
			cout << " Введите минуты: ";
			cin >> t1.minutes;
			cout << " Введите часы: ";
			cin >> t1.hours;
			long totalsecs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
			cout << "Всего секунд: " << totalsecs;
			break;
		}
		case 10:
			// // // // // // // // // // // //
		{
			sterling s;
			double desfunt;
			cout << "введите десятичные фунты:";
			cin >> desfunt;
			desfunt = round(desfunt * 100) / 100;
			s.pounds = round(desfunt);
			s.pence = int((desfunt - round(desfunt)) * 100);
			if (s.pence / 19 != 0) {
				s.shillings = s.pence / 19;
				s.pence = s.pence % 19;
			}
			else s.shillings = 0;
			cout << "В старой системе: " << s.pounds << "." << s.shillings << "." << s.pence << endl;
			break;
		}
		case 11:
			// // // // // // // // // // // //
		{
			char d;
			timee t1, t2, result;
			cout << "1 время" << endl;
			cout << " Введите время: ";
			cin >> t1.hours >> d >> t1.minutes >> d >> t1.seconds;
			cout << "2 время" << endl;
			cout << " Введите время: ";
			cin >> t2.hours >> d >> t2.minutes >> d >> t2.seconds;
			long totalsecs = (t1.hours * 3600 + t1.minutes * 60 + t1.seconds) + (t2.hours * 3600 + t2.minutes * 60 + t2.seconds);
			result.hours = totalsecs / 3600;
			result.minutes = (totalsecs / 60) - (totalsecs / 3600 * 60);
			result.seconds = totalsecs - (totalsecs / 60 * 60);
			cout << " В итоге сложили и получили: " << result.hours << ":" << result.minutes << ":" << result.seconds;
			break;
		}
		case 12:
			// // // // // // // // // // // //
		{
			bool kon = true;
			while (kon)
			{
				fraction a, b;
				char oper;
				string yn;
				cout << "Введите операцию ";
				cin >> a.a >> a.b >> oper >> b.a >> b.b;
				switch (oper) {
				case '+':
				{
					cout << "Answer = " << (float)(a.a * b.b + a.b * b.a)/ (float)(a.b * b.b);
					break;
				}
				case '-':
				{
					cout << "Answer = " << (float)(a.a * b.b - a.b * b.a) / (float)(a.b * b.b);
					break;
				}
				case '*':
				{
					cout << "Answer = " << (float)(a.a * b.a) / (float)(a.b * b.b);
					break;
				}
				case '/':
				{
					cout << "Answer = " << (float)(a.a * b.b) / (float)(a.b * b.a);
					break;
				}
				default: {cout << "Answer = none"; break; }
				}
				cout << "Продолжить? y/n: ";
				cin >> yn;
				if (yn == "n")
				{
					kon = false;
				}
			}
		}
		default:
			End = false;
			break;
		}
	}
	return 0;
}
