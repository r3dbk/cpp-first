#include <iostream>
#include <array>
#include <numeric>
#include <iomanip>
using namespace std;

int main() {
    array<int, 10> arr;
    
    // заполнение массива числами от 1 до 10
    for (int i = 0; i < 10; i++) {
        arr[i] = i + 1;
    }
    
    // расчет среднего арифметического
    double sum = accumulate(arr.begin(), arr.end(), 0);
    double average = sum / arr.size();
    
    // вывод результата
    cout << fixed << setprecision(2);
    cout << "average: " << average << endl;
    
    return 0;
}