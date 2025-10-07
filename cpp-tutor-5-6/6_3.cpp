#include <iostream>
#include <vector>
using namespace std;
// Кузнецов Святослав Владимирович ИНБО-31-25

int main() {
    int n, m;
    cin >> n >> m; // считываем размеры поля: n строк, m столбцов
    int w;
    cin >> w; // считываем количество грибов
    // создаем поле размером n x m, заполненное нулями и поле для отображ,
    vector<vector<int>> field(n, vector<int>(m, 0));
    vector<vector<char>> display(n, vector<char>(m, '0'));
    // считываем координаты грибов и размещаем их
    for (int i = 0; i < w; i++) {
        int x, y;
        cin >> x >> y; // считываем координаты
        // преобразуем координаты к индексам
        x--; y--;
        field[x][y] = -1; // помечаем гриб как -1
        display[x][y] = '*'; // в поле отображения ставим '*'
    }
    // проходим по всем ячейкам поля для подсчета грибов вокруг
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // если в текущей ячейке гриб, пропускаем подсчет
            if (field[i][j] == -1) continue;

            int count = 0; // счетчик грибов вокруг текущей ячейки

            // проверяем все 8 соседних ячеек
            for (int dx = -1; dx <= 1; dx++) {
                for (int dy = -1; dy <= 1; dy++) {
                    // пропускаем саму текущую ячейку
                    if (dx == 0 && dy == 0) continue;
                    int ni = i + dx;
                    int nj = j + dy;
                    // проверяем, что сосед в пределах поля
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                        // если у соседа гриб, увеличиваем счетчик
                        if (field[ni][nj] == -1) {
                            count++;
                        }
                    }
                }
            }
            // записываем количество грибов вокруг в поле отображения
            display[i][j] = '0' + count;
        }
    }
    // выводим результат
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << display[i][j];
            if (j < m - 1) {
                cout << "   ";
            }
        }
        cout << endl;
    }
    return 0;
}