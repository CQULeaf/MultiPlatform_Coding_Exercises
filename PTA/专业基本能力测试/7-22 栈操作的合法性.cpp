#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    cin.ignore();

    while (n--) {
        string s;
        bool isValid = true;
        getline(cin, s);
        stack<char> myStack;

        for (char ch : s) {
            if (ch == 'S') {
                if (myStack.size() < m) {
                    myStack.push(ch);
                } else {
                    isValid = false;
                    break;
                }
            } else if (ch == 'X') {
                if (!myStack.empty() && myStack.top() == 'S') {
                    myStack.pop();
                } else {
                    isValid = false;
                    break;
                }
            }
        }
        
        if (myStack.empty() && isValid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }

    system("pause");
    return 0;
}