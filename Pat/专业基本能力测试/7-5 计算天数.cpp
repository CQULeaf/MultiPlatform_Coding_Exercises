#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    string input;
    getline(cin, input);

    int year, month, day;
    char delimiter;
    stringstream ss(input);
    ss >> year >> delimiter >> month >> delimiter >> day;

    vector<int> daysInMonth = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    int dayOfYear = 0;
    for (int i = 0; i < month - 1; ++i) {
        dayOfYear += daysInMonth[i];
    }
    dayOfYear += day;

    cout << dayOfYear << endl;

    system("pause");
    return 0;
}