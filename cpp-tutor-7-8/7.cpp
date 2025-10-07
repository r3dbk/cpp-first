#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;
// Кузнецов Святослав Владимирович ИНБО-31-25

int main() {
    int n;
    cin >> n;
    cin.ignore(); // чищу буфера чтобы адекватно работал getline
    double sums[3] = {0}; // массив для хранения сумм критериев
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line); // читаем всю строку с данными друга
        stringstream ss(line); // поток для разбора строки
        string surname, name;
        double scores[3];
        // разбор строки на отдельные данные
        ss >> surname >> name >> scores[0] >> scores[1] >> scores[2];
        // добавление каждой оценки к соответствующей сумме
        for (int j = 0; j < 3; j++) {
            sums[j] += scores[j];
        }
    }
    // выводим сред. значения с одним знаком после запятой
    cout << fixed << setprecision(1);
    cout << sums[0] / n << " " << sums[1] / n << " " << sums[2] / n << endl;

    return 0;
}