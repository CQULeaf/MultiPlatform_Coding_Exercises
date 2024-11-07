#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string N;
    cin >> N;

    vector<int> digitCount(10, 0);

    for (char ch : N) {
        if (ch >= '0' && ch <= '9') {
            digitCount[ch - '0']++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > 0) {
            cout << i << ":" << digitCount[i] << endl;
        }
    }

    return 0;
}