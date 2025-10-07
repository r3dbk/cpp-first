#include <iostream>
#include <vector>
using namespace std;
// Кузнецов Святослав Владимирович ИНБО-31-25

int main() {
    int n;
    // получаем число студентов и пары после которых хотят уйти
    cin >> n;
    // объявляем вектор для хранения номеров пар студентов и считываем номера пар для каждого студента
    vector<int> students;
    for (int i = 0; i < n; i++) {
        int pair_num;
        cin >> pair_num;
        students.push_back(pair_num);
    }
    // проверяем были ли изменения, проходим по вектору удаляя соседние одинаковые элементвы
    bool changed = true;
    while (changed) {
        changed = false;
        for (int i = 0; i < (int)students.size() - 1; i++) {
            if (students[i] == students[i + 1]) {
                students.erase(students.begin() + i, students.begin() + i + 2);
                changed = true; // изменения были
                break;
            }
        }
    }
    // вычисляем количество студентов, которые ушли в кф
    int gone_students = n - students.size();
    // выводим
    cout << gone_students << endl;
    return 0;
}