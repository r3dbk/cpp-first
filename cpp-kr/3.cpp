#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    char symbol;
    // ввод коэффициентов квадратного многочлена
    cin >> a >> b >> c;
    // ввод символа выбора операции
    cin >> symbol;
    if (symbol == 'M') {
        // вывод Ф.И.
        cout << "Kuznetsov Sviatoslav";
    }
    else if (symbol == 'h') {
        // вычисление корней квадратного уравнения
        if (a == 0) {
            if (b == 0) {
                if (c == 0) {
                    // все коэффициенты равны нулю т.е бесконечное количество корней
                    cout << "any real number";
                } else {
                    // уравнение не имеет решений
                    cout << "no roots";
                }
            } else {
                // линейное уравнение
                double root = -c / b;
                cout << root;
            }
        } else {
            // квадратное уравнение
            double discriminant = b * b - 4 * a * c;

            if (discriminant > 0) {
                // два различных корня
                double root1 = (-b + sqrt(discriminant)) / (2 * a);
                double root2 = (-b - sqrt(discriminant)) / (2 * a);
                cout << root1 << " " << root2;
            } else if (discriminant == 0) {
                // один корень
                double root = -b / (2 * a);
                cout << root;
            } else {
                // нет действительных корней
                cout << "no real roots";
            }
        }
    }
    else if (symbol == 'v') {
        int number;
        // запрос доп числа
        cin >> number;
        // проверка делимости на 25
        if (number % 25 == 0) {
            cout << "yes";
        } else {
            cout << "no";
        }
    }
    return 0;
}

