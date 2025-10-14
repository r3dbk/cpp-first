#include <iostream>
using namespace std;
// Кузнецов Святослав Владимирович ИНБО-31-25

// передаём параметром введённое число для проверки, простое ли число
bool isPrime(int number) {
    // числа меньше 2-х не будет иметь пре999дшествующих простых чисел
    if (number < 2) return false;
    // перебираем возможные делители от 2 до квадратного корня из числа
    for (int i = 2; i * i <= number; i++) {
        // проверяем, делится ли number на i без остатка,
        if (number % i == 0) return false;
    }
    return true;
}


// передаём параметром введённое число для поиска предшевств. ему простых чисел
void allPrimesN(int N) {
    cout << "Prime numbers up to " << N << ": ";
    // перебираем все числа от 2х до N включительно
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) cout << i << " ";
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