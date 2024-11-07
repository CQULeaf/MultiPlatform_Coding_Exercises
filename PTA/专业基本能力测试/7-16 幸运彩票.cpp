#include <iostream>

using namespace std;

int sumOfDigits (int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    int N;
    cin >> N;

    while (N--) {
        int number;
        cin >> number;

        int n_left, n_right;
        n_left = number / 1000;
        n_right = number % 1000;

        if (sumOfDigits(n_left) == sumOfDigits(n_right)) {
            cout << "You are lucky!" << endl;
        } else {
            cout << "Wish you good luck." << endl;
        }
    }

    system("pause");
    return 0;
}