#include "Drob.h"
#include <iostream>
using namespace std;
class Calc {
public:
    int a, b, c, d;
    char drob;
    void Slozhenie() {
        cout << "Введите 1 дробь" << endl;
        cin >> a;
        cin >> drob;
        cin >> b;
        cout << "Введите 2 дробь" << endl;
        cin >> c;
        cin >> drob;
        cin >> d;
        int p;
        int nod;
        int chis = a + c;
        int znam = b * d;
        int max, min;
        if (chis > znam) {
            max = chis;
            min = znam;
        }
        else {
            for (int i = 0; i < (max % min == 0); i++) {
                p = max;
                max = min;
                min = p % min;
                int nod = min;

            }
        }


    }
    void Umnozhenie() {
        cout << "Введите 1 дробь" << endl;
        cin >> a;
        cin >> drob;
        cin >> b;
        cout << "Введите 2 дробь" << endl;
        cin >> c;
        cin >> drob;
        cin >> d;
        cout << "Результат = " << a * c << "/" << b * d;
    }
    void Vichitanie() {
        cout << "Введите 1 значение" << endl;
        cin >> a;
        cin >> drob;
        cin >> b;
        cout << "Введите 2 значение" << endl;
        cin >> c;
        cin >> drob;
        cin >> d;
        cout << "Результат = " << a - c << "/" << b - d;
    }
    void Delenie() {
        cout << "Введите 1 значение" << endl;
        cin >> a;
        cin >> drob;
        cin >> b;
        cout << "Введите 2 значение" << endl;
        cin >> c;
        cin >> drob;
        cin >> d;
        cout << "Результат = " << a * d << "/" << c * b;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    char drob;
    int b;

    string komand;
    cout << "Введите команду" << endl;
    Drob* one = new Drob(a, b);

    //while (cin >> komand) {
    //    if (komand == "Slozhenie") {
    //        calculation->Slozhenie();
    //    }
    //    else if (komand == "Umnozhenie") {
    //        calculation->Umnozhenie();
    //    }
    //    else if (komand == "Vichitanie") {
    //        calculation->Vichitanie();
    //    }
    //    else if (komand == "Delenie") {
    //        calculation->Delenie();
    //    }
    //}
};