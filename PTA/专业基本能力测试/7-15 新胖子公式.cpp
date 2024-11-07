#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    float a, b;
    cin >> a >> b;

    float result;
    result = a / pow(b, 2);

    cout << fixed << setprecision(1) << result << endl;

    if (result > 25) {
        cout << "PANG" << endl;
    } else {
        cout << "Hai Xing" << endl;
    }

    system("pause");
    return 0;
}