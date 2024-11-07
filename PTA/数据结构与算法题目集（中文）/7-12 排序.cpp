#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; ++i) {
        if (i != n - 1) cout << arr[i] << " ";
        else cout << arr[i] << endl;
    }
    system("pause");
    return 0;
}