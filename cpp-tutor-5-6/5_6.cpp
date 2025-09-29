#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;
    if (n <= 0) {
        cout << "Error: matrix size must be a positive number!" << endl;
        return 1;
    }
    srand(time(0));
    vector<vector<int>> matrix(n, vector<int>(n));
    // заполнение матрицы случайнми числами
    cout << "Generated " << n << "x" << n << " matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 9 + 1;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    // вычисление суммы главной диагонали
    int sum = 0;
    cout << "Main diagonal elements: ";
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    // вывод только суммы (как в формате вывода)
    cout << sum << endl;
    return 0;
}