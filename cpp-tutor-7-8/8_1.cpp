#include <iostream>
using namespace std;

int main() {
    int n;
    // получаем целое число
    cin >> n;
    // инициализируем double и выделяем память
    double* p = new double(n);
    // создаем указатель
    double** pp = &p;
    // выводим
    cout << **pp << endl;
    // освобождаем память
    delete p;
    return 0;
}