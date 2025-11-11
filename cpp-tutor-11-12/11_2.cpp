#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    deque<string> orders;
    
    // добавляем обычные заказы в конец
    orders.push_back("order1");
    orders.push_back("order2");
    orders.push_back("order3");
    
    // добавляем срочные заказы в начало
    orders.push_front("urgent1");
    orders.push_front("urgent2");
    
    // удаляем выполненные заказы из начала
    orders.pop_front(); // удаляем urgent2
    orders.pop_front(); // удаляем urgent1
    
    // выводим оставшиеся заказы
    cout << "remaining orders: ";
    for (auto order : orders) {
        cout << order << " ";
    }
    
    return 0;
}