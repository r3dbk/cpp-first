#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    if (!in.is_open() || !out.is_open()) {
        return 1;
    }
    string s;
    getline(in, s);
    string result = "";
    string num_str = "";
    for (char c : s) {
        if (isdigit(c)) {
            num_str += c;
        } else {
            if (!num_str.empty()) {
                int num = stoi(num_str);
                string binary = "";
                if (num == 0) {
                    binary = "0";
                } else {
                    while (num > 0) {
                        binary = to_string(num % 2) + binary;
                        num /= 2;
                    }
                }
                result += binary;
                num_str.clear();
            }
            result += c;
        }
    }

    if (!num_str.empty()) {
        int num = stoi(num_str);
        string binary = "";
        if (num == 0) {
            binary = "0";
        } else {
            while (num > 0) {
                binary = to_string(num % 2) + binary;
                num /= 2;
            }
        }
        result += binary;
    }
    out << result;
    in.close();
    out.close();
    return 0;
}