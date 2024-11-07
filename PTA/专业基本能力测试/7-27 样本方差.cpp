#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n;
    double sum = 0;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
        sum += array[i];
    }

    double mean = sum / n;
    double r_sum = 0;

    for (int i = 0; i < n; i++) {
        r_sum += pow((array[i] - mean), 2);
    }

    double r_final = r_sum / (n - 1);

    cout << fixed << setprecision(2) << r_final << endl;

    system("pause");
    return 0;
}