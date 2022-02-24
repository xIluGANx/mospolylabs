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
      break;
		case 2:
			//task2
			break;
		case 3:
			//task3
			break;
		case 4:
			//task4
			break;
		case 5:
			//task5
			break;
		case 6:
			//task6
			break;
		case 7:
			//task7
			break;
		case 8:
			//task8
			break;
		case 9:
			//task9
			break;
		case 10:
			//task10
			break;
		case 11:
			//task11
			break;
		case 12:
			//task12
			break;
		default:
			End = false;
			break;
		}
	}
	return 0;
}
