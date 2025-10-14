#include <iostream>
#include <vector>
using namespace std;
// Кузнецов Святослав Владимирович ИНБО-31-25

vector<int> removeDuplicates(const vector<int> &arr) {
    vector<int> result; // массив для результата
    bool found; // флаг проверки дубликата
    for (int i : arr) {
        found = false;
        // проверяем есть ли текущий элемент уже в результате
        for (int j : result) {
            if (i == j) {
                found = true;
                break;
            }
        }
        // добавляем если найден
        if (!found) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    const vector<int> numbers = {4, 7, 2, 3, 8, 4, 7, 1, 3, 3};
    cout << "Original array: ";
    for (const int num: numbers) {
        cout << num << " ";
    }
    cout << endl;

    const vector<int> uniqueNumbers = removeDuplicates(numbers);
    cout << "Array w/o duplicates: ";
    for (const int num: uniqueNumbers) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
