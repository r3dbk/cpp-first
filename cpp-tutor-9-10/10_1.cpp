#include <iostream>
using namespace std;

template<typename T>
void swapVal(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 5, b = 10;
    cout << a << ' ' << b << endl;
    swapVal(a, b);
    cout << a << ' ' << b << endl;
    
    return 0;
}