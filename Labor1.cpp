// Labor1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Вариант 7

#include <iostream>
#include <cmath>

using namespace std;

class Triangle
{
private:
    double a;
    double b;
    double c;
    double ha;
    double hb;
    double hc;
    double p;
    
public:
    Triangle(double a, double b, double c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        p = a + b + c;
        ha = (2 / a) * (sqrt(p * (p - a) * (p - b) * (p - c)));
        hb = (2 / b) * (sqrt(p * (p - a) * (p - b) * (p - c)));
        hc = (2 / c) * (sqrt(p * (p - a) * (p - b) * (p - c)));
    }
    void printAllInfo()
    {
        cout << "Высота стороны а = " << ha << " , высота стороны b = " << hb << " , высота стороны c = " << hc << endl;
    }
};

class Functions
{
private:
    float floatX;
    double doubleX;
    float floatY;
    double doubleY;
    float floatZ;
    double doubleZ;
public:
    Functions()
    {
        cout << "Введите значение x: " << endl;
        cin >> doubleX;
        floatX = (float)doubleX;
        float flA, flB, flC;
        double dbA, dbB, dbC;

        flA = pow(floatX, 2);
        flB = flA * 9.81;
        flC = abs(3 * floatX - 0.512);
        floatY = flB * flC;

        dbA = pow(doubleX, 2);
        dbB = dbA * 9.81;
        dbC = abs(3 * doubleX - 0.512);
        doubleY = dbB * dbC;

        flA = 5 * (pow(floatX, 2)) * floatY - 3;
        flB = pow(floatX, 3) - 2 * floatX * floatY + 4 * (pow(floatY, 2));
        floatZ = flA / flB;

        dbA = 5 * (pow(doubleX, 2)) * doubleY - 3;
        dbB = pow(doubleX, 3) - 2 * doubleX * doubleY + 4 * (pow(doubleY, 2));
        doubleZ = dbA / dbB;
    }
    void printAllInfo()
    {
        cout << "Для типа float:\n" << "x = " << floatX << " , y = " << floatY << " , z = " << floatZ << endl;
        cout << "Для типа double:\n" << "x = " << doubleX << " , y = " << doubleY << " , z = " << doubleZ << endl;
    }

};

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Задание #1, вариант 7 " << endl;
    Triangle ABC(2, 2, 2);
    ABC.printAllInfo();
    cout << "-------------------------" << endl << "Задание #2, вариант 7 " << endl;
    Functions func;
    func.printAllInfo();
    return 0;
}
