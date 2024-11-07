#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    while (N--) {
        float prize;
        cin >> prize;

        if (prize < M) {
            cout << "On Sale! " << fixed << setprecision(1) << prize << endl;
            continue;
        }
    }

    system("pause");
    return 0;
}