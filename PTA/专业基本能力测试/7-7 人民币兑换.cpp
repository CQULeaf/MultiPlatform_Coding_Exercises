#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int totalMoney = 150;

    if (n <= 12) {
        for (int i = 1; i < n + 1; i++) 
        {
            cout << i << ' ' << 50 - 4 * i << ' ' << 50 + 3 * i << endl;
        }
    } else {
        for (int i = 1; i < 13; i++) 
        {
            cout << i << ' ' << 50 - 4 * i << ' ' << 50 + 3 * i << endl;
        }
    }

    system("pause");
    return 0;
}