#include <iostream>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <unordered_set>

using namespace std;

struct Node {
    int address;
    int key;
    int next;
};

void printList(const vector<Node>& list) {
    for (int i = 0; i < list.size(); i++) {
        cout << setw(5) << setfill('0') << list[i].address << " ";
        cout << list[i].key << " ";
        if (i < list.size() - 1) {
            cout << setw(5) << setfill('0') << list[i + 1].address << endl;
        } else {
            cout << -1 << endl;
        }
    }
}


int main() {
    int startAddress, n;
    cin >> startAddress >> n;

    unordered_map<int, Node> nodes;
    for (int i = 0; i < n; i++) {
        int address, key, next;
        cin >> address >> key >> next;
        nodes[address] = {address, key, next};
    }

    unordered_set<int> seenAbsValues;
    vector<Node> uniqueList;
    vector<Node> removedList;

    int current = startAddress;
    while (current != -1) {
        int absKey = abs(nodes[current].key);
        if (seenAbsValues.count(absKey) == 0) {
            seenAbsValues.insert(absKey);
            uniqueList.push_back(nodes[current]);
        } else {
            removedList.push_back(nodes[current]);
        }
        current = nodes[current].next;
    }

    printList(uniqueList);
    printList(removedList);

    system("pause");
    return 0;
}