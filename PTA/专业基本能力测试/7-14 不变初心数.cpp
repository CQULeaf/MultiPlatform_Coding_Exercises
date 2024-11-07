#include <iostream>

using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N;
    cin >> N;

    while (N--) {
        int num;
        cin >> num;

        int initSum = sumOfDigits(num);
        bool hasSameSum = true;

        for (int i = 2; i <= 9; i++) {
            if (sumOfDigits(num * i) != initSum) {
                hasSameSum = false;
                break;
            }
        }

        if (hasSameSum) {
            cout << initSum <<endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}