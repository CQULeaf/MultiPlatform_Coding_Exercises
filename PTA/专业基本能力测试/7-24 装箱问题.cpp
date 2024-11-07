#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> goods(N);

    for (int i = 0; i < N; i++) {
        cin >> goods[i];
    }

    vector<int> boxes;

    for (int i = 0; i < N; i++) {
        bool placed = false;

        for (int j = 0; j < boxes.size(); j++) {
            if (goods[i] <= boxes[j]) {
                boxes[j] -= goods[i];
                cout << goods[i] << " " << j + 1 << endl;
                placed = true;
                break;
            }
        }

        if (!placed) {
            boxes.push_back(100 - goods[i]);
            cout << goods[i] << " " << boxes.size() << endl;
        }
    }

    cout << boxes.size() << endl;

    system("pause");
    return 0;
}