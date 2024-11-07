#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> symbol;
    string line;

    while (getline(cin, line) && line != ".") {
        cout << line << endl;
        for (size_t i = 0; i < line.length(); i++) {
            if (line[i] == '(' || line[i] == '[' || line[i] == '{') {
                symbol.push(string(1, line[i]));
            } else if (line[i] == '/' && i + 1 < line.length() && line[i + 1] == '*') {
                symbol.push("/*");
                i++;
            }

            else if (line[i] == ')') {
                if (!symbol.empty() && symbol.top() == "(") {
                    symbol.pop();
                } else {
                    cout << "NO\n?-)" << endl;
                    return 0;
                }
            } else if (line[i] == '}') {
                if (!symbol.empty() && symbol.top() == "{") {
                    symbol.pop();
                } else {
                    cout << "NO\n?-}" << endl;
                    return 0;
                }
            } else if (line[i] == ']') {
                if (!symbol.empty() && symbol.top() == "[") {
                    symbol.pop();
                } else {
                    cout << "NO\n?-]" << endl;
                    return 0;
                }
            } else if (line[i] == '*' && i + 1 < line.length() && line[i + 1] == '/') {
                if (!symbol.empty() && symbol.top() == "/*") {
                    symbol.pop();
                } else {
                    cout << "NO\n?-*/" << endl;
                    return 0;
                }
                i++;
            }
        }
    }

    if (symbol.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO\n" << symbol.top() << "-?" << endl;
    }

    system("pause");
    return 0;
}