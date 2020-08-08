#include <iostream>

using namespace std;

double F(double, double); // Прототип функции
double y;

int main()
{
    double a, x;
    cout << "Vvedite a = ";
    cin >> a;
    cout << "\n Vvedite x = ";
    cin >> x; //Ввод а, х
    if ((a == 0) || (x == -2)) {
        cout << "Na 0 delit nelyzya! Vvedite drugiye chisla\n";
        cout << "------------------------------------------\n";
        int c = main(); //Если а = 0 или х = -2 происходит деление на ноль. Программа запускается заново с предложением ввести другие числа
    }
    else
        cout << "y = " << F(a, x) << "\n"; //Если числа подходят - вывести у
    return 0;
}

double F(double a, double x) //Функция, которая считает значение у
{
    y = sin(2 * x * x) / (x + 2) + cos(x / (2 * a));
    return y;
}
