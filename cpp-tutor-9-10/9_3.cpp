#include <iostream>
using namespace std;
// Кузнецов Святослав Владимирович ИНБО-31-25

// передаём в параметры основание и степень соотвественно
double pwr(double a, int n) {
    // проверка на случай нулевой степени
    if (n == 0) {
        return 1;
    }
    // отрицательная степень
    if (n < 0) {
        return 1 / pwr(a, -n);
    }
    // рекурсивный вызов
    return a * pwr(a, n - 1);
}

int main() {
    double base;
    int exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    const double result = pwr(base, exponent);
    cout << base << "^" << exponent << " = " << result << endl;
    return 0;
}