#include <iostream>
using namespace std;

const char n = '\n';
const char t = '\t';

void main()
{
    setlocale(LC_ALL, "Rus");

    int a,b,d,okData;
    char c;
    double e;


    cout << t << t << t << t << t << t << "калькулятор" << n << n;
    while (true) {
        cout << "введи первое число: ";
        cin >> a;

        cout << "введите второе число: ";
        cin >> b;

        cout << n << "введите знак действия: +, -, *, / : ";
        cin >> c;

        if (c == '+') {
            d = a + b;
            cout << n << n << "Ваш ответ: " << d << n << n << n;
        }
        else if (c == '-') {
            d = a - b;
            cout << n << n << "Ваш ответ: " << d << n << n << n;
        }
        else if (c == '*') {
            d = a * b;
            cout << n << n << "Ваш ответ: " << d << n << n << n;
        }
        else if (c == '/') {
            e = (double)a / b;
            cout << n << n << "Ваш ответ: " << e << n << n << n;
        }
        else {
            cout << "вы ввели не допустимый символ" << n << n << n;
        }

        cout << "хотите продолжить вычисление?" << endl
            << "если хотите введите 1 или 2" << endl
            << "1 - продолжить, 2 - закончить" << endl;
        cin >> okData;

        if (okData == 1) {
            continue;
        }
        else if (okData == 2) {
            break;
        }
        else if (okData < 1 || okData>2) {
            cout <<"надо вводить 1 или 2";
        }
    }
    
    system("pause");
}