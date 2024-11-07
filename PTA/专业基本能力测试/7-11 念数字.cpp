#include <iostream>
#include <string>

using namespace std;

int main() {
    string numStr;
    cin >> numStr;

    string pinyin[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

    if (numStr[0] == '-') {
        cout << "fu ";
        numStr = numStr.substr(1);
    }

    for (size_t i = 0; i < numStr.length(); i++) {
        int digit = numStr[i] - '0';
        cout << pinyin[digit];
        if (i != numStr.length() - 1) {
            cout << ' ';
        }
    }

    cout << endl;

    system("pause");
    return 0;
}