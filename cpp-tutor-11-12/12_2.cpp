#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream in1("input1.txt");
    ifstream in2("input2.txt");

    if (!in1.is_open() || !in2.is_open()) {
        return 1;
    }
    string x, y;
    getline(in1, x);
    getline(in2, y);
    if (x.find(y) != string::npos) {
        cout << "yes";
    } else {
        cout << "no";
    }
    in1.close();
    in2.close();
    return 0;
}
