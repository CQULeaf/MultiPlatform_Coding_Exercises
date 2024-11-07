#include <iostream>

using namespace std;

int main() {
    int aAu, bAu;
    cin >> aAu >> bAu;

    int xJu, yJu, zJu;
    cin >> xJu >> yJu >> zJu;

    int aJu, bJu;
    aJu = bJu = 0;
    
    if (xJu == 0) {
        aJu++;
    } else {
        bJu++;
    }

    if (yJu == 0) {
        aJu++;
    } else {
        bJu++;
    }

    if (zJu == 0) {
        aJu++;
    } else {
        bJu++;
    }

    if ((aAu > bAu && aJu > 0) || (aAu < bAu && aJu == 3)) {
        cout << "The winner is a: " << aAu << " + " << aJu << endl;
    } else{
        cout << "The winner is b: " << bAu << " + " << bJu << endl;
    }

    system("pause");
    return 0;
}