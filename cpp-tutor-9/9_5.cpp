#include <iostream>
using namespace std;
// Кузнецов Святослав Владимирович ИНБО-31-25

bool isPrime(int number) {
    // числа меньше 2 не явл. простыми
    if (number < 2) {
        return false;
    }
    // проверяем делители от 2 до кв. корня из числа
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

void allPrimesN(int N) {
    cout << "Prime numbers up to " << N << ": ";
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    allPrimesN(N);
    return 0;
}