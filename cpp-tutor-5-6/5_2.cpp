#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Инициализируем переменную длинны
    int arrayLength;
    // спрашиваем у юзера длину массива
    cout << "Enter the length of the array: ";
    cin >> arrayLength;
    // проверка корректности ввода
    if (arrayLength <= 0) {
        cout << "Error: Array size must be a positive number!" << endl;
        return 1;
    }
    // Инициализируем вектор заданного юзером размера
    vector<int> arr(arrayLength);
    // Заполняем массив числами, вводимыми пользователем
    cout << "Enter " << arrayLength << " numbers:" << endl;
    for (int i = 0; i < arrayLength; ++i) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }
    // Выводим введенный массив
    cout << "\nArray: ";
    for (int i = 0; i < arrayLength; ++i) {
        cout << arr[i];
        if (i < arrayLength - 1) {
            cout << ", ";
        }
    }
    cout << endl;
    // Счетчики для четных и нечетных чисел
    int evenCount = 0;
    int oddCount = 0;
    // Проходим по массиву и считаем четные/нечетные числа
    for (int i = 0; i < arrayLength; ++i) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    // выводим результаты
    cout << "\nResults:" << endl;
    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;
    return 0;
}