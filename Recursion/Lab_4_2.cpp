
#include <iostream>

using namespace std;

int F(int); // Прототип функции
int P;

int main()
{
    int n;

    while (true) // цикл продолжается до тех пор, пока пользователь не введёт корректное значение
    {
        cout << "Vvedite n = ";
        cin >> n; //Ввод


        if (cin.fail() || n <= 0) // если предыдущее извлечение оказалось неудачным или n<=0
        {
            cin.clear(); // то возвращаем cin в 'обычный' режим работы
            cin.ignore(32767, '\n'); // и удаляем значения предыдущего ввода
            cout << "Nekorektnuy vvod!\n";
            cout << "------------------------------------------\n";
        }

        else  break;
    }

    cout << "P = " << F(n);
    return 0;
}

int F(int n) //Функция, которая считает значение P
{
    if (n == 1)
        return 2;
    else
        return F(n - 1) * (n * 2); //Рекурсивный подсчет значения Р
    return P;
}
