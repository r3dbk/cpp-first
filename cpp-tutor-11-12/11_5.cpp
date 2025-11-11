#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> a = {1, 3, 5, 7};
    list<int> b = {2, 3, 6, 7, 8};
    a.merge(b);  // объединение
    a.unique();  // дубликаты
    a.remove_if([](int x) { return x > 6; });  // больше 6
    cout << "result: ";
    for (auto num : a) {
        cout << num << " ";
    }
    return 0;
}