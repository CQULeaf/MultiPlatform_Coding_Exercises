#include <iostream>

using namespace std;

int main() {
    int startTime, minutes;
    cin >> startTime >> minutes;

    int startHour = startTime / 100;
    int startMinute = startTime % 100;

    int totalMinutes = startHour * 60 + startMinute + minutes;

    int endHour = (totalMinutes / 60) % 24;
    int endMinute = totalMinutes % 60;

    if (endHour > 0) {
        cout << endHour;
    } else {
        cout << "0";
    }
    if (endMinute < 10) {
        cout << "0";
    }
    cout << endMinute << endl;

    system("pause");
    return 0;
}