#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isValidInteger(const string& str) {
    if (str.empty()) return false;
    for (char c : str) {
        if(!isdigit(c)) return false;
    }
    int num = stoi(str);
    return num >= 1 && num <= 1000;
}

int main() {
    string input, A_str, B_str;
    getline(cin, input);

    size_t spacePos = input.find(' ');
    if (spacePos == string::npos) {
        cout << "? + ? = ?" << endl;
        return 0;
    }

    A_str = input.substr(0, spacePos);
    B_str = input.substr(spacePos + 1);

    bool isAValid = isValidInteger(A_str);
    bool isBValid = isValidInteger(B_str);

    if (isAValid && isBValid) {
        int A = stoi(A_str);
        int B = stoi(B_str);
        cout << A << " + " << B << " = " << A + B << endl;
    } else {
        cout << (isAValid ? A_str : "?") << " + "
             << (isBValid ? B_str : "?") << " = ?" << endl;
    }

    system("pause");
    return 0;
}