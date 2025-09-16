#include <cstdint>
#include <iostream>
using namespace std;

int main() {
    int64_t a, b;
    char oper;
    cout << "Write your expression (like this: 2 * 2): \n";
    cin >> a >> oper >> b;

    int64_t res;
    switch (oper) {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':
        case ':':
            res = a / b;
            break;
        case '%':
            res = a % b;
            break;
        default: // неправильно введён, либо отсутствует знак арифметической операции
            cout << "Check arithmetic operator!\n";
            res = 0;
    }

    cout << a << " " << oper << " " << b << " = " << res << "\n";
}