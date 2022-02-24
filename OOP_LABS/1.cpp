#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
    int num, a, b, Low, c, d;
	  bool End=true;
	  float pound, dol, far, cel, funt, shill, penny;
	  const int T = 10;
	  const float ster = 1.487, th = 0.172, nm = 0.584, ie = 0.00955;
	char sim;
	//switch cases
	while(End)
	{
		cout << "Choose number of task:";
		cin >> num;
		switch (num)
		{
		case 1:
			//task1
			system("cls");
			cout << "№1\n";
			cout << "Введите число галлонов: ";
			cin >> pound;
			cout << "эквивалентный объем в кубических футах = " << pound / 7.481 << endl;
			break;
		case 2:
			//task2
			system("cls");
			cout << "№2\n";
			cout << 1990 << setw(8) << 135 << endl
				<< 1991 << setw(8) << 7290 << endl
				<< 1992 << setw(8) << 11300 << endl
				<< 1993 << setw(8) << 16200 << endl;
			break;
		case 3:
			//task3
			system("cls");
			cout << "№3\n";
			a = T * 2;
			b = a;
			b--;
			cout << T << endl << a << endl << b << endl;
			break;
		case 4:
			//task4
			system("slc");
			cout << "№4\n";
			cout << "Есенин С. А.\n\n";
			cout << "Акростих (Рюрику Ивневу)\n"
				<< "Радость, как плотвица быстрая,\n"
				<< "Юрко светит и в воде.\n"
				<< "Руки могут церковь выстроить\n"
				<< "И кукушке и звезде.\n"
				<< "Кайся нивам и черемухам, —\n"
				<< "У живущих нет грехов.\n"
				<< "Из удачи зыбы промаха\n"
				<< "Воют только на коров.\n"
				<< "Не зови себя разбойником,\n"
				<< "Если ж чист, так падай в грязь.\n"
				<< "Верь — теленку из подойника\n"
				<< "Улыбается карась.\n"
			break;
		case 5:
			//task5
			system("cls");
			cout << "№5 n\";
			cout << "Введите любой символ: ";
			cin >> sim;
			Low = islower(sim);
			cout << Low << endl;
			break;
		case 6:
			//task6
			system("cls");
			cout << "№6\n";
			cout << "Введите желаемую сумму долларов: ";
			cin >> dollars;
			cout << "Сумма долларов в фунтах стерлингов = " << dol / ster << endl
				<< "Сумма долларов в франках = " << dol * th << endl
				<< "Сумма долларов в немецкой марке = " << dol * nm << endl
				<< "Сумма долларов в японской йене = " << dol * ie << endl;
			break;
		case 7:
			//task7
			system("cls");
			cout << "№7\n";
			cout << "Введите температуру в градусах: ";
			cin >> cel;
			far = cel * (9.0 / 5.0) + 32.0;
			cout << "Температура в Фаренгейтах : " << far << endl;
			break;
		case 8:
			//task8
			system("cls");
			cout << "№8\n";
			cout << 1990 << setw(8) << setfill('.') << 135 << endl
				<< 1991 << setw(8) << setfill('.') << 7290 << endl
				<< 1992 << setw(8) << setfill('.') << 11300 << endl
				<< 1993 << setw(8) << setfill('.') << 16200 << endl;
			break;
		case 9:
			//task9
			system("cls");
			cout << "№9\n";
			cout << "Введите первую дробь: ";
			cin >> a >> b;
			cout << "Введите вторую дробь: ";
			cin >> c >> d;
      cout << "Сумма равна "
			cout << (a * d + b * c) << "/" << (b * d) << endl;
			break;
		case 10:
			//task10
			system("cls");
			cout << "№10\n";
			cout << "Введите количество фунтов: ";
			cin >> funt;
			cout << "Введите количество шиллингов: ";
			cin >> shill;
			cout << "введите количество пенсов: ";
			cin >> penny;
      cout << "Десятичных фунтов"
			cout << (char)156 << (float)floor((funt + ((float)shill * 12 + penny) / 2.4 / 100) * 100) / 100 << endl;
			break;
		case 11:
			//task11
			system("cls");
			cout << "№11\n";
			cout << setiosflags(ios::left) << setw(12) <<"Фамилия"
				<< setiosflags(ios::left) << setw(12) <<"Имя" 
				<< setw(20) << setiosflags(ios::left) << "Адрес"
				<< setw(12) << setiosflags(ios::left) << "Город" << endl << endl;
			cout << setiosflags(ios::left) << setw(12) << "Петров" 
				<< setw(12) << setiosflags(ios::left) << "Василий" 
				<< setw(20) << setiosflags(ios::left) << "Кленовая 16"
				<< setw(12) << setiosflags(ios::left) << "Санкт-Петербург\n";
			cout << setiosflags(ios::left) << setw(12) << "Иванов" 
				<< setw(12) << setiosflags(ios::left) << "Сергей" 
				<< setw(20) << setiosflags(ios::left) << "Осиновая 3" 
				<< setw(12) << setiosflags(ios::left) << "Находка\n";
			cout << setiosflags(ios::left) << setw(12) << "Сидоров" 
				<< setw(12) << setiosflags(ios::left) << "Иван" 
				<< setw(16) << setiosflags(ios::left) << "Березовая 21" 
				<< setw(10) << setiosflags(ios::left) << "Калинингра\n";

			break;
		case 12:
			//task12
			system("cls");
  	  cout << "№11\n";
			cout << "Введите десятичное число фунтов: ";
			cin >> pound;
			shill = ((int)(pound*100)%100) * 2.4 / 12;
			pound = (int)pound;
			cout << "Эквивалентная сумма в старой форме записи: " << (char)156 << pound << "." << shill << endl;
			break;
		default:
			End = false;
			break;
		}
	}
	return 0;
}
