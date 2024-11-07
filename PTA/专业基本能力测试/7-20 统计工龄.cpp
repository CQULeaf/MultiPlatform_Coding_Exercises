#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> countAge(51, 0);

    for (int i = 0; i < n; i++) {
        int age;
        cin >> age;
        countAge[age]++;
    }

    for (int i = 0; i <= 50; i++) {
        if (countAge[i] > 0) {
            cout << i << ":" << countAge[i] << endl;
        }
    }

    return 0;
}