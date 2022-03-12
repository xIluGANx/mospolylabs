#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
// 5
long hms_to_secs(int h, int m, long s);
//struct 6
struct timee {
    int seconds, minutes, hours;
};
//6
long time_to_secs(timee time);
int secs_to_time(int h, int m, long s);
// 7
double power(double n, int p = 2);
double power(char n, int p = 2);
double power(int n, int p = 2);
double power(long n, int p = 2);
double power(float n, int p = 2);
//enum7
enum type { dou, cha, in, lon, floa };
//8
void swap(int* a, int* b);
//9
void swapT(timee& n1, timee& n2);
// 10
int xx = 0;
void foo();
void fooglobal();
//struct 11
struct sterling {
    int pounds, shillings, pence;
};
// 11
sterling inputsterling();
sterling count(sterling a, sterling b);
sterling output(sterling a);
sterling a, b, sum;
//struct12
struct fraction {
    int numerator;
    int denominator;
};
//12
fraction fadd(fraction a1, fraction b1);
fraction fsub(fraction a1, fraction b1);
fraction fmul(fraction a1, fraction b1);
fraction fdiv(fraction a1, fraction b1);
fraction a1, b1, summ;
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
                int a, b, l;
                string yn;
                long c;
                cout << "Введите часы: ";
                cin >> a;
                cout << "Введите минуты: ";
                cin >> b;
                cout << "Введите секунды: ";
                cin >> c;
                c = hms_to_secs(a, b, c);
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
                c = time_to_secs(t1);
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
            case dou: {
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
                float number;
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
            int a, b;
            cout << "введите 2 числа и мы их поменяем местами!" << endl;
            cin >> a >> b;
            swap(a, b);
            cout << a << " " << b << endl;
            break;
        }
        case 9:
            // // // // // // // // // // // //
        {
            timee t1,t2;
            cout << "1-введите 3 числа: часы минуты секунды. И мы 1 и 2 время поменяем местами!" << endl;
            cin >>t1.hours>> t1.minutes >> t1.seconds;
            cout << "1-введите 3 числа: часы минуты секунды. И мы 1 и 2 время поменяем местами!" << endl;
            cin >>t2.hours>>t2.minutes >> t2.seconds;
            swapT(t1, t2);
            cout << "1- " << t1.minutes << ":" << t1.seconds << endl;
            cout << "2- " << t2.minutes << ":" << t2.seconds << endl;
            break;

        }
        case 10:
            // // // // // // // // // // // //
        {

            int a;
            cout << "сколько раз вызвать функцию? ";
            cin >> a;
            while (a != 0) {
                foo();
                fooglobal();
                a--;
            }
            break;
        }
        case 11:
            // // // // // // // // // // // //
        {
            sterling a, b,sum;
            a = inputsterling();
            b = inputsterling();
            sum = count(a, b);
            output(sum);
            break;
        }
        case 12:
            // // // // // // // // // // // //
        {
            bool kon = true;
            while (kon)
            {
                char oper;
                string yn;
                cout << "Введите операцию ";
                cin >> a1.numerator >> a1.denominator >> oper >> b1.numerator >> b1.denominator;
                switch (oper) {
                case '+':
                {
                    summ = fadd(a1, b1);
                    break;
                }
                case '-':
                {
                    summ = fsub(a1, b1);
                    break;
                }
                case '*':
                {
                    summ = fmul(a1, b1);
                    break;
                }
                case '/':
                {
                    summ = fdiv(a1, b1);
                    break;
                }
                default: {cout << "Answer = none"; break; }
                }
                cout << "Answer = " << summ.numerator << "/" << summ.denominator << endl;
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
//5 ------------------------------------
long hms_to_secs(int h, int m, long s)
{
    s = h * 3600 + m * 60 + s;
    return s;
}
//6 --------------------------------------

long time_to_secs(timee time)
{
    long s;
    s = time.hours * 3600 + time.minutes * 60 + time.seconds;
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
    for (int j = 0; j < p; j++)//умножить на n                 
        result *= n;//p раз                    
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
//----------------------------------
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapT(timee& n1, timee& n2)
{
    timee temp = n1;
    n1 = n2;
    n2 = temp;
}

void foo()
{
    static int x = 0;
    x++;
    cout << "вызвано " << x << " раз" << endl;
}
void fooglobal()
{
    xx++;
    cout << "вызвано " << xx << "раз" << endl;
}
//11 ------------------------------------------
sterling inputsterling()
{
    sterling a;
    cout << "Введите фунты: ";
    cin >> a.pounds;
    cout << "Введите шиллинги: ";
    cin >> a.shillings;
    cout << "Введите пенсы:";
    cin >> a.pence;
    return a;
}

sterling count(sterling a, sterling b)
{
    sterling sum;
    int summ = (a.pounds * 19 * 11 + a.shillings * 11 + a.pence) + (b.pounds * 19 * 11 + b.shillings * 11 + b.pence);
    sum.pounds = summ / (19 * 11);
    sum.shillings = summ % (19 * 11) / 11;
    sum.pence = summ % (19 * 11) % 11;
    return sum;
}

sterling output(sterling a)
{
    cout << "Сумма: " << a.pounds << " " << a.shillings << " " << a.pence << endl;
    return a;
}
//12 -------------------------------------------------------------------------------

fraction fadd(fraction a1, fraction b1)
{
    summ.numerator = a1.numerator * b1.denominator + a1.denominator * b1.numerator;
    summ.denominator = a1.denominator * b1.denominator;
    return summ;

}

fraction fsub(fraction a1, fraction b1)
{
    summ.numerator = a1.numerator * b1.denominator - a1.denominator * b1.numerator;
    summ.denominator = a1.denominator * b1.denominator;
    return summ;
}

fraction fmul(fraction a1, fraction b1)
{
    summ.numerator = a1.numerator * b1.denominator;
    summ.denominator = a1.denominator * b1.denominator;
    return summ;
}

fraction fdiv(fraction a1, fraction b1)
{
    summ.numerator = a1.numerator * b1.denominator;
    summ.denominator = a1.denominator * b1.numerator;
    return summ;
}
