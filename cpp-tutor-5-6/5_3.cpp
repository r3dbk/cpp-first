#include <iostream>
#include <vector>
#include <limits> // для использования INT_MIN и INT_MAX

using namespace std;

int main() {
    int size;
    
    // запрашиваем размер массива у пользователя
    cout << "enter the size of the array: ";
    cin >> size;
    
    // проверка корректности введенного размера
    if (size <= 0) {
        cout << "error: array size must be a positive number!" << endl;
        return 1;
    }
    
    // создаем вектор заданного размера
    vector<int> arr(size);
    
    // заполняем массив числами, вводимыми пользователем
    cout << "enter " << size << " numbers:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "element " << (i + 1) << ": ";
        cin >> arr[i];
    }
    
    // выводим введенный массив
    cout << "\nyour array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << endl;
    
    // инициализируем переменные для хранения минимального и максимального значений
    int min_element = INT_MAX; // начинаем с максимально возможного значения
    int max_element = INT_MIN; // начинаем с минимально возможного значения
    
    // проходим по массиву и находим минимальный и максимальный элементы
    for (int i = 0; i < size; ++i) {
        // обновляем минимальный элемент, если текущий элемент меньше
        if (arr[i] < min_element) {
            min_element = arr[i];
        }
        
        // обновляем максимальный элемент, если текущий элемент больше
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
    }
    
    // выводим результаты
    cout << "\nresults:" << endl;
    cout << "minimum element: " << min_element << endl;
    cout << "maximum element: " << max_element << endl;
    
    return 0;
}