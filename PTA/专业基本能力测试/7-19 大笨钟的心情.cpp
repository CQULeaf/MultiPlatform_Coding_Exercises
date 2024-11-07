#include <iostream>

using namespace std;

int main() {
    int clock[24];
    for (int i = 0; i < 24; i++) {
        cin >> clock[i];
    }

    while (true) {
        int time;
        cin >> time;
        if (time < 0 || time >= 24) {
            break;
        }
        if (clock[time] > 50) {
            cout << clock[time] << " Yes" << endl;
        } else {
            cout << clock[time] << " No" << endl;
        }
    }

    return 0;
}
