#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // получаем размер массива
    // выделяем динамическую память под массив double
    double* arr = new double[n];
    // Seed генератора ранд. чисел
    srand(time(0));
    // заполняем массив числами от 1 до n
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // сначала заполняем по порядку
    }
    // перемешиваем массив
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        // обмен значений
        double temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    // вычисляем сумму элементов массива
    double sum = 0;
    double* ptr = arr; // указатель на начало
    for (int i = 0; i < n; i++) {
        sum += *ptr; // разыменовываем указатель
        ptr++; // перемещаем указатель на следующий элем.
    }
    // выводим
    cout << sum << endl;
    // освобождаем память
    delete[] arr;
    return 0;
}