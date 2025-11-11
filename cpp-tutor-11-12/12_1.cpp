#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    if (!in.is_open()) {
        cerr << "Error: Cannot open input.txt" << endl;
        return 1;
    }
    if (!out.is_open()) {
        cerr << "Error: Cannot create output.txt" << endl;
        return 1;
    }
    string remove_chars = "useragreement";
    char c;
    while (in.get(c)) {
        bool should_remove = false;
        for (char r : remove_chars) {
            if (tolower(c) == tolower(r)) {
                should_remove = true;
                break;
            }
        }
        if (!should_remove) {
            out << c;
        }
    }
    in.close();
    out.close();
    return 0;
}