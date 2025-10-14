#include <iostream>
#include <string>
using namespace std;
// Кузнецов Святослав Владимирович ИНБО-31-25

// передаём параметрами первую и вторую строки для сравнения
bool isEqual(const string& str1, const string& str2) {
    // первичная проверка эквивалентности длин
    if (str1.length() != str2.length()) {
        return false;
    }
    // посимвольное сравнение
    for (int i = 0; i < str1.length(); i++) {
        char c1 = str1[i];
        char c2 = str2[i];
        // преобразование в нижний регистр
        if (c1 >= 'A' && c1 <= 'Z') c1 += 32;
        if (c2 >= 'A' && c2 <= 'Z') c2 += 32;
        // символы разные, следственно строки разные:
        if (c1 != c2) {
            return false;
        }
    }
    return true;
}

int main() {
    string s1, s2;
    cout << "Enter string 1: ";
    getline(cin, s1);
    cout << "Enter string 2: ";
    getline(cin, s2);
    cout << "String 1: " << s1 << endl;
    cout << "String 2: " << s2 << endl;
    cout << "s1 equals s2: " << (isEqual(s1, s2) ? "true" : "false") << endl;
    return 0;
}