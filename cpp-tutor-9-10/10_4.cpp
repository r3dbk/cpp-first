#include <iostream>
using namespace std;

template<typename T>
bool contains(T arr[], int size, T element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    cout << contains(arr1, 5, 3) << endl;
    string words[] = {"cat", "dog", "bird"};
    cout << contains(words, 3, string("fish")) << endl;
    
    return 0;
}