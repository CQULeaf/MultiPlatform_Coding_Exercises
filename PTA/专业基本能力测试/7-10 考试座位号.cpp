#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_map<int, pair<string, int>> seatMap;

    for (int i = 0; i < N; i++) {
        string id;
        int testSeat, examSeat;
        cin >> id >> testSeat >> examSeat;
        seatMap[testSeat] = make_pair(id, examSeat);
    }

    int M;
    cin >> M;

    for (int i = 0; i < M; i++) {
        int querySeat;
        cin >> querySeat;
        if (seatMap.find(querySeat) != seatMap.end()) {
            cout << seatMap[querySeat].first << " " << seatMap[querySeat].second << endl;
        }
    }

    return 0;
}