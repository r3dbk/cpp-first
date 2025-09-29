#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;
    // проходим по всем строкам матрицы
    for (int i = 0; i < n; i++) {
        // проходим по всем столбцам матрицы
        for (int j = 0; j < n; j++) {
            // определяем положение элемента относительно побочной диагонали
            if (i + j < n - 1) {
                // элемент выше
                cout << "0";
            } else if (i + j == n - 1) {
                // элемент на побочной диагонали
                cout << "1";
            } else {
                // элемент ниже побочной диагонали
                cout << "2";
            }
            if (j < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}