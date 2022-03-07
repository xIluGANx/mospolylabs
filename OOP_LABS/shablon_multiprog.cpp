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
		// задания. каждый кейс соответствует номеру задачи
		case 1:
			// // // // // // // // // // // //
		{
			cout << " choose only  or further";
			break;
		}
		case 2:
			// // // // // // // // // // // //
		case 3:
			// // // // // // // // // // // // 
		case 4:
			// // // // // // // // // // // //
		case 5:
			// // // // // // // // // // // //
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
