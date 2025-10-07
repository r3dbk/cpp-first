#include <iostream>
#include <vector>
using namespace std;
// Кузнецов Святослав Владимирович ИНБО-31-25

int main() {
    int n, m;
    // спрашиваем у юзера кол-вр рядов и столбцов массива
    cout << "Enter the number of rows (N): ";
    cin >> n;
    cout << "Enter the number of columns (M): ";
    cin >> m;
    // проверка корректности ввода
    if (n <= 0 || m <= 0) {
        cout << "Must be positive numbers!" << endl;
        return 1;
    }
    // Seed генератора ранд. чисел
    srand(time(0));
    // создаем двумерный вектор размером n x m
    vector<vector<int>> matrix(n, vector<int>(m));
    // заполняем массив случайными числами от 1 до 100
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = rand() % 100 + 1; // случайные числа от 1 до 100
        }
    }
    // выводим массив на экран
    cout << "\nGenerated " << n << "x" << m << " matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    // вычисляем сумму всех элементов массива
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            total_sum += matrix[i][j]; // добавляем каждый элемент к общей сумме
        }
    }
    // выводим сумму всех элементов
    cout << "Sum of all elements: " << total_sum << endl;
    return 0;
}