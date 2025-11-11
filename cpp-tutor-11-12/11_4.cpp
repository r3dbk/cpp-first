#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> list;
    
    // вставка чисел в обратном порядке
    list.insert_after(list.before_begin(), 5);
    list.insert_after(list.before_begin(), 4);
    list.insert_after(list.before_begin(), 3);
    list.insert_after(list.before_begin(), 2);
    list.insert_after(list.before_begin(), 1);
    
    // вывод списка
    cout << "list: ";
    for (auto num : list) {
        cout << num << " ";
    }
    
    return 0;
}