#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int p1, p2, p3, p4, minP, threshold;
    cin >> p1 >> p2 >> p3 >> p4 >> minP >> threshold;

    int Pressures[4] = {p1, p2, p3, p4};

    int maxP = *max_element(Pressures, Pressures + 4);

    int checkCount = 0;
    int checkTire = -1;

    for (int i = 0; i < 4; i++) {
        if (Pressures[i] < minP || abs(Pressures[i] - maxP) > threshold) {
            checkCount++;
            if (checkCount == 1) {
                checkTire = i + 1;
            }
        }
    }

    if (checkCount == 0) {
        cout << "Normal" << endl;
    } else if (checkCount == 1) {
        cout << "Warning: please check #" << checkTire << "!" << endl;
    } else {
        cout << "Warning: please check all the tires!" << endl;
    }

    return 0;
}