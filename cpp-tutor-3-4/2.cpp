#include <cstdint>
#include <iostream>
using namespace std;

int main() {
    int64_t a, b;
    char operation;
    cout << "Write your expression (like this: 2 * 2): \n";
    cin >> a >> operation >> b;

    int64_t result;
    switch (operation) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
        case ':':
            result = a / b;
            break;
        case '%':
            result = a % b;
            break;
        default: // неправильно введён, либо отсутствует знак арифметической операции
            cout << "Check arithmetic operator!\n";
            result = 0;
    }

    cout << a << " " << operation << " " << b << " = " << result << "\n";
}