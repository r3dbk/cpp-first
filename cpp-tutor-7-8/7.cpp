#include <iostream>
#include <iomanip>
#include <string>
#include <utility>
using namespace std;
// Кузнецов Святослав Владимирович ИНБО-31-25

int main() {
    int n;
    cin >> n; // считываем количество друзей
    // first хранит сумму первых двух критериев, second - 3го
    pair<pair<double, double>, double> total_scores = {{0, 0}, 0};
    // обрабатываем данные каждого
    for (int i = 0; i < n; i++) {
        string surname, name;
        double score1, score2, score3;
        // считываем фамилию, имя и три оценки
        cin >> surname >> name >> score1 >> score2 >> score3;
        // накапливаем суммы оценок в паре
        total_scores.first.first += score1;
        total_scores.first.second += score2;
        total_scores.second += score3;
    }
    // вычисляем средние значения и выводим
    double avg1 = total_scores.first.first / n;
    double avg2 = total_scores.first.second / n;
    double avg3 = total_scores.second / n;
    cout << fixed << setprecision(1);
    cout << avg1 << " " << avg2 << " " << avg3 << endl;
    return 0;
}