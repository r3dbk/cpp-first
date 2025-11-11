#include <iostream>
using namespace std;

int main() {
    int n;
    // инициал-ия генератора случ. чисел
    srand(time(0));
    // запрос размера массива
    cout << "enter array size: ";
    cin >> n;
    // создание массива
    int arr[n];
    // автоматич. заполнение массива случайными числами от -25 до 25
    cout << "generated array: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 51 - 25;
        cout << arr[i] << " ";
    }
    cout << endl;
    // перемещение отрицательных элементов в начало
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            // обмен местами с текущей позицией
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
            index++;
        }
    }
    // вывод результата
    cout << "result: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

