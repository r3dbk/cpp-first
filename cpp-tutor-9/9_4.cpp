#include <iostream>
#include <string>
using namespace std;
// Кузнецов Святослав Владимирович ИНБО-31-25

int stringLength(const string& str) {
    int count = 0;
    // используем while пока не дойдём до конца строки
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    string s1;
    cout << "Enter the string: ";
    getline(cin, s1);
    cout << "Length is: " << stringLength(s1) << endl;
    return 0;
}