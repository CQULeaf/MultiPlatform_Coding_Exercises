#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isValidChar(char ch) {
    return isalpha(ch) || isdigit(ch) || ch == '.';
}

bool hasLetter(const string& password) {
    for (char ch : password) {
        if (isalpha(ch)) return true;
    }
    return false;
}

bool hasDigit(const string& password) {
    for (char ch :password) {
        if (isdigit(ch)) return true;
    }
    return false;
}

int main() {
    int N;
    cin >> N;
    cin.ignore();

    while (N--)
    {
        string password;
        getline(cin, password);

        if (password.length() < 6) {
            cout << "Your password is tai duan le." << endl;
            continue;
        }

        bool valid = true;
        for (char ch : password) {
            if (!isValidChar(ch)) {
                valid = false;
                break;
            }
        }
        if (!valid) {
            cout << "Your password is tai luan le." << endl;
            continue;
        }

        bool letter = hasLetter(password);
        bool digit = hasDigit(password);

        if (!letter) {
            cout << "Your password needs zi mu." << endl;
        } else if (!digit) {
            cout << "Your password needs shu zi." << endl;
        } else {
            cout << "Your password is wan mei." << endl;
        }                
    }

    system("pause");
    return 0;    
}