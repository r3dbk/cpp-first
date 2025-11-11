#include <iostream>
using namespace std;

template<typename T>
T sumArray(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    cout << sumArray(arr1, 5) << endl;
    double arr2[] = {1.1, 2.2, 3.3};
    cout << sumArray(arr2, 3) << endl;
    return 0;
}