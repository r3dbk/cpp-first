#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    list<string> students = {"Ivanov", "Petrov", "Sidorov", "Alekseev", "Borisov"};
    // сортировка в алфавитном порядке
    students.sort();
    cout << "sorted list: ";
    for (auto student : students) {
        cout << student << " ";
    }
    cout << endl;
    // удаление фамилий начинающихся на A
    students.remove_if([](const string& name) {
        return !name.empty() && name[0] == 'A';
    });
    // вывод
    cout << "final list: ";
    for (auto student : students) {
        cout << student << " ";
    }
    
    return 0;
}