#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
// Кузнецов Святослав Владимирович ИНБО-31-25

int main() {
    // Seed генератора ранд. чисел
    srand(time(0));
    // Инициализируем переменную длинны
    int arrayLength;
    // спрашиваем у юзера длину массива
    cout << "Enter the length of the array: ";
    cin >> arrayLength;
    // проверка корректности ввода
    if (arrayLength <= 0) {
        cout << "Array length must be a positive number!" << std::endl;
        return 1;
    }
    // Создаем и заполняем массив рандомными числами (для примера ограничимся натур.ч. от 1 до 100 включ.)
    vector<int> arr(arrayLength);
    for (int i = 0; i < arrayLength; ++i) {
        arr[i] = rand() % 100 + 1;
    }
    // Выводим массив
    cout << "\nRandomly generated array: ";
    for (int i = 0; i < arrayLength; ++i) {
        cout << arr[i];
        if (i < arrayLength - 1) {
            cout << ", ";
        }
    }
    cout << endl;
    // считаем среднее
    double sum = 0;
    for (int i = 0; i < arrayLength; ++i) {
        sum += arr[i];
    }
    double average = sum / arrayLength;
    // выводим среднее
    cout << "Average: " << average << std::endl;
    return 0;
}