#include <iostream>
using namespace std;

template<typename T>
T xmin(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    cout << xmin(3.2, 2.8) << endl;
    cout << xmin('b', 'a') << endl;
    
    return 0;
}